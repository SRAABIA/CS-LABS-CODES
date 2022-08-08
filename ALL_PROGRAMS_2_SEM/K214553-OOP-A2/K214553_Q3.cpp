#include<iostream>
using namespace std;
class Cloths{
    string Tagid;
    public:
    void set_tagid(string id){
        Tagid = id;
    }
    string get_tagid(){
        return Tagid;
    }
    static float revenue;
};
float Cloths :: revenue = 0;
class Shirt;            //forward declaration
class Pant;             //forward declaration
class Tie;              //forward declaration
class Suit;             //forward declaration
double Tax(string,float);      //Global Friend Function Prototype
class Shirt: virtual public Cloths{
    protected:
    string Design;
    string Discount_Code;
    float Price;
    float tax;
    int quantity;
    public:
    float get_price(){ return Price; }
    static int stock;
    Shirt(){
    }
    Shirt(string Design, int quantity){
        this-> Design = Design;
        this-> quantity = quantity;
        Price = 1499;
        set_tagid("Shirt_#_");
    }
    Shirt(string Design, int quantity, string Discount_Code){
        this-> Design = Design;
        this-> quantity = quantity;
        this->Discount_Code = Discount_Code;
        Price = 1499;
        set_tagid("Shirt_#_");
   }
    int get_quantity(){ return quantity; }
    string get_disc(){ return Discount_Code; }
    float Bill(Shirt);
    float Bill(Shirt, string discount_code );
    friend double Tax(string,float );
    bool operator<(Pant & );

};
int Shirt :: stock = 100;
float Shirt :: Bill(Shirt s){
    Cloths :: revenue += (s.get_price()*s.quantity)+Tax( "S",s.get_price()*s.quantity);
    s.stock-=s.quantity;
    return s.get_price()*s.quantity;
}
float Shirt :: Bill(Shirt s, string discount){
    Cloths :: revenue += (s.get_price()*s.quantity)+Tax( "S",s.get_price()*s.quantity)-s.get_price()*s.quantity*0.23;
    s.stock-=s.quantity;
    return (s.get_price()*s.quantity)-s.get_price()*s.quantity*0.23;
}

class Pant : virtual public Cloths{
    protected:
    string style;
    float price;
    int quantity;
    public:

    Pant (){ }
    Pant (string style, int qty){
        this-> style = style;
        set_tagid("Pant_#_");
        this-> quantity = qty;
        if(style == "BB"){
            price = 1199;
        }
        else if(style == "SF"){
            price = 1599;
        }
        else if(style == "NF"){
            price = 1999;
        }
    }
    //6. Provide a copy constructor for copying objects of Pant class
    Pant( Pant& obj){
        set_tagid(obj.get_tagid());
        style = obj.style;
        price = obj.price;
        quantity=obj.quantity;
    }

    int get_quantity(){ return quantity; }
    float get_price(){ return price; }
    static int stock;
    float Bill(Pant);
    friend double Tax( string,float );

};
int Pant :: stock = 100;
float Pant :: Bill(Pant p){
    Cloths :: revenue += (p.get_price()*p.quantity)+Tax("P",p.get_price()*p.quantity);
    p.stock-=p.quantity;
    return p.get_price()*p.quantity;
}
bool Shirt :: operator<(Pant& obj){     //Definition Of Operator lt
    if(Price*quantity<obj.get_price()*obj.get_quantity())
    return true;
    return false;
}
class Tie: virtual public Cloths{
    protected:
    string pattern;
    float price;
    int quantity;
    public:
 
    Tie (){  }
    Tie (string pattern, int quantity){
        this->pattern = pattern;
        this-> quantity = quantity;
        set_tagid("Tie_#_");
        if(pattern == "ST"){
            price = 699;
        }
        else if(pattern == "CT"){
            price = 799;
        }
    }

    int get_quantity(){ return quantity; }
    float get_price(){ return price; }
    static int stock;
    friend double Tax(string,float );
    float Bill(Tie);

};
int Tie :: stock = 100;
float Tie :: Bill(Tie t){
    Cloths :: revenue += Tie::get_price()*Tie::get_quantity();
    t.stock-=t.quantity;
    return price*quantity;
}

class Suit : public Shirt, public Pant, public Tie{
    float price;
    bool pant=false,shirt=false,tie=false,disc_shirt=false;
    public:
    Suit (){ }
    Suit(string pant_des, int quant):Pant(pant_des,quant){
        set_tagid("Pant_#_");
        pant = true;
    }
    
    Suit(string tie_p, int q ,int):Tie(tie_p,q){
        set_tagid("Tie_#_");
        tie = true;
    }
    Suit(int qua , string shirt_des ):Shirt(shirt_des,qua){
        set_tagid("Shirt_#_");
        shirt = true;
    }
    Suit(int qua , string shirt_des, string disc_code ):Shirt(shirt_des,qua,disc_code){
        set_tagid("S_D_23%");
        disc_shirt = true;
    }
    Suit(string tie_p, int q, string pant_des, int quant):Pant(pant_des,quant),Tie(tie_p,q){
        set_tagid("PT@##");
        pant = true;
        tie = true;
    }
    Suit(string tie_p, int q, int qua ,string shirt_des):Shirt(shirt_des,qua),Tie(tie_p,q){
        set_tagid("ST@##");
        tie = true;
        shirt = true;
    }
    Suit(string pant_des, string shirt_des, int quant,  int qua ):Shirt(shirt_des,qua),Pant(pant_des,quant){
        set_tagid("SP@#");
        shirt = true;
        pant = true;
    }
    Suit(string tie_p, int q, string pant_des, int quant, string shirt_des, int qua ):Shirt(shirt_des,qua),Pant(pant_des,quant),Tie(tie_p,q){
        set_tagid("SUIT@__");
        shirt = true;
        pant = true;
        tie = true;
    }

    float Bill( );
    void Stock_Details();
    void Revenue();
    void Display();
};  
float Suit :: Bill( ){
    Pant p(Pant::style,Pant::quantity);
        Shirt s1(Shirt::Design,Shirt::quantity,Shirt::Discount_Code);
        Shirt s(Shirt::Design,Shirt::quantity);
    Tie t(Tie::pattern,Tie::quantity);
    if (shirt&&pant&&tie){
        return Shirt::Bill(s) + Pant::Bill(p) + Tie::Bill(t);
    }
    else if (pant&&shirt){
        return Pant::Bill(p) + Shirt::Bill(s);
    }
    else if (shirt&&tie){
        return Shirt::Bill(s) + Tie::Bill(t);
    }
    else if (tie&&pant){
        return Pant::Bill(p) + Tie::Bill(t);
    }
    else if (tie){
        return Tie::Bill(t);
    }
    else if (pant){
        return Pant::Bill(p);
    }
    else if (shirt){
        return Shirt::Bill(s);
    }
    else if(disc_shirt){
        return Shirt::Bill(s1,s1.get_disc());
    }
    return 0.0;
}
void Suit :: Stock_Details(){
    cout<<endl<<"====================================================";
    cout<<endl<<"\t\tInventory Details\n";
    cout<<endl<<"\tShirts Left: "<<Shirt::stock;
    cout<<endl<<"\tPants Left: "<<Pant::stock;
    cout<<endl<<"\tTies Left: "<<Tie::stock;
}
void Suit :: Revenue(){
    cout<<endl<<"====================================================";
    cout<<endl<<"\t\tRevenue Details\n";
    cout<<endl<<"\tTotal Revenue: "<<Cloths::revenue;
    cout<<endl<<"====================================================";

}
void Suit :: Display(){
    float x=0;
    float bill=Bill();
    cout<<endl<<"====================================================";
    cout<<endl<<"\t\tDisplaying Bill :)\n";
    if (shirt&&pant&&tie){
    	//cout<<"Heya!";
        cout<<endl<<"\tTag ID: "<<get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t1- Shirts : "<<Shirt::get_quantity()<<"      Amount: "<<Shirt::get_price()*Shirt::get_quantity();
        cout<<endl<<"\t2- Pants : "<<Pant::get_quantity()<<"      Amount: "<<Pant::get_price()*Pant::get_quantity();
        cout<<endl<<"\t3- Ties : "<<Tie::get_quantity()<<"      Amount: "<<Tie::get_price()*Tie::get_quantity();
        cout<<endl<<"\n\tYour Total Bill IS = "<< bill;
        cout<<endl<<"\n\tBill (with Tax) : "<<((double)bill+Tax("S",Shirt::get_price()*Shirt::get_quantity())+Tax("P",Pant::get_price()*Pant::get_quantity()));
    }
    else if (pant&&shirt){
        cout<<endl<<"\tTag ID: "<<Shirt::get_tagid();
        cout<<endl<<"\tTag ID: "<<Pant::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t1- Shirts : "<<Shirt::get_quantity()<<"      Amount: "<<Shirt::get_price()*Shirt::get_quantity();
        cout<<endl<<"\t2- Pants : "<<Pant::get_quantity()<<"      Amount: "<<Pant::get_price()*Pant::get_quantity();
        cout<<endl<<"\tYour Total Bill IS = "<< bill;
        x=(double)Tax("S",Shirt::get_price()*Shirt::get_quantity())+Tax("P",Pant::get_price()*Pant::get_quantity());
        cout<<endl<<"\tBill (with Tax) : "<<bill+x;
    }
    else if (shirt&&tie){
        cout<<endl<<"\tTag ID: "<<Shirt::get_tagid();
        cout<<endl<<"\tTag ID: "<<Tie::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t1- Shirts : "<<Shirt::get_quantity()<<"      Amount: "<<Shirt::get_price()*Shirt::get_quantity();
        cout<<endl<<"\t2- Ties : "<<Tie::get_quantity()<<"      Amount: "<<Tie::get_price()*Tie::get_quantity();
        cout<<endl<<"\tYour Total Bill IS = "<< bill;
        cout<<endl<<"\tBill (with Tax on shirt only) : "<<bill+Tax("S",Shirt::get_price()*Shirt::get_quantity());
    }
    else if (tie&&pant){
        cout<<endl<<"\tTag ID: "<<Pant::get_tagid();
        cout<<endl<<"\tTag ID: "<<Tie::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t1- Pants : "<<Pant::get_quantity()<<"      Amount: "<<Pant::get_price()*Pant::get_quantity();
        cout<<endl<<"\t2- Ties : "<<Tie::get_quantity()<<"      Amount: "<<Tie::get_price()*Tie::get_quantity();
        cout<<endl<<"\n\tYour Total Bill IS = "<< bill;
        cout<<endl<<"\n\tBill (with Tax) : "<<bill+Tax("P",Pant::get_price()*Pant::get_quantity());
    }
    else if (tie){
        cout<<endl<<"\tTag ID: "<<Tie::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t- Ties : "<<Tie::get_quantity()<<"      Amount: "<<Tie::get_price()*Tie::get_quantity();
        cout<<endl<<"\n\tYour Total Bill IS = "<< bill;
        cout<<endl<<"\n\tBill (with Tax) : No Tax On Ties = "<< bill;
    }
    else if (pant){
        cout<<endl<<"\tTag ID: "<<Pant::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t- Pants : "<<Pant::get_quantity()<<"      Amount: "<<Pant::get_price()*Pant::get_quantity();
        cout<<endl<<"\tYour Total Bill IS = "<< bill;
        cout<<endl<<"\n\tBill (with Tax) : "<<bill+Tax("P",Pant::get_price()*Pant::get_quantity());
    }
    else if (shirt){
        cout<<endl<<"\tTag ID: "<<Shirt::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t- Shirts : "<<Shirt::get_quantity()<<"      Amount: "<<Shirt::get_price()*Shirt::get_quantity();
        cout<<endl<<"\n\tYour Total Bill IS = "<< bill;
        x = Tax("S",Shirt::get_price()*Shirt::get_quantity());
        cout<<endl<<"\n\tBill (with Tax) : "<<bill+x;
    }
    else if (disc_shirt){
        cout<<endl<<"\tTag ID: "<<Shirt::get_tagid();
        cout<<endl<<"\n\tYou purchased the following items: ";
        cout<<endl<<"\t- Shirts : "<<Shirt::get_quantity()<<"      Amount: "<<Shirt::get_price()*Shirt::get_quantity()<<"\t-Discount: "<<Shirt::get_price()*Shirt::get_quantity()*0.23;
        cout<<endl<<"\n\tYour Total Bill IS = "<< bill;
        x = Tax("D",Shirt::get_price()*Shirt::get_quantity());
        cout<<endl<<"\n\tBill (with Tax) : "<<bill+x;
    }
    
}

double Tax(string type,float price){   //Global Friend Function Declaration
    //Shirt s;
    //Pant p ;
    double k=0;
    if (type == "P"){
        k = (double)price*0.045;
    }
    else if(type=="S"){
    	//cout<<"\n"<<s.Price;
        k = (double)price*0.075;
    }

    return (double)k;
}
int main(){
    int n,length, quantity,quantity1,quantity2;
    string maybe,design,design1,design2;
    string disc_code;
    while(maybe!="N" && maybe!="n"){
    cout<<endl<<"\t\tWELCOME TO DINER'S";
    cout<<endl<<"\t--Look's Like you are here to buy a perfect Suit--";
    cout<<endl<<"\t   Q.What would you like to buy: \n\t\t1. Shirt\n\t\t2. Pant\n\t\t3. Tie\n\t\t4. Shirt & Pant\n\t\t5. Shirt & Tie\n\t\t6. Pant & Tie\n\t\t7. Complete Suit\n\t\t8. Shirt Using Discount Voucher\n\t\t9.Compare Objects of Shirt and Pant class\n\t\t10. None\n\t\t::  ";
    cin>>n;
    switch(n){
        case 1:
        {
        cout<<endl<<"\t\tEnter Shirt Design: \n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        Suit s(quantity,design);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }
        break;
        case 2:
        {
        cout<<endl<<"\t\tEnter Pant Design: \n\t\tBB for Bell-Bottomed \n\t\tSF for Straight-Fit \n\t\tNF for Narrow-Fit  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        Suit s(design,quantity);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }

        break;        
        case 3:
        {
        cout<<endl<<"\t\tEnter Tie Design: \n\t\tST for Stripped Ties \n\t\tCT for Checkered Ties :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        Suit s(design,quantity,1);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }
        break;         
        case 4:
        {
        cout<<endl<<"\t\tEnter Shirt Design: \n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        cout<<endl<<"\t\tEnter Pant Design: \n\t\tBB for Bell-Bottomed \n\t\tSF for Straight-Fit \n\t\tNF for Narrow-Fit  :: ";
        fflush(stdin); getline(cin,design1);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity1;
        Suit s(design1,design,quantity1,quantity);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }

        break;         
        case 5:
        {
        cout<<endl<<"\t\tEnter Shirt Design: \n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        cout<<endl<<"\t\tEnter Tie Design: \n\t\tST for Stripped Ties \n\t\tCT for Checkered Ties :: ";
        fflush(stdin); getline(cin,design1);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity1;
        Suit s(design1,quantity1,quantity,design);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }

        break;         
        case 6:
        {
        cout<<endl<<"\t\tEnter Pant Design: \n\t\tBB for Bell-Bottomed \n\t\tSF for Straight-Fit \n\t\tNF for Narrow-Fit  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        cout<<endl<<"\t\tEnter Tie Design: \n\t\tST for Stripped Ties \n\t\tCT for Checkered Ties :: ";
        fflush(stdin); getline(cin,design1);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity1;
        Suit s(design,quantity,design1,quantity1);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }


        break;         
        case 7:
        {
        cout<<endl<<"\t\tEnter Shirt Design: \n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        cout<<endl<<"\t\tEnter Pant Design: \n\t\tBB for Bell-Bottomed \n\t\tSF for Straight-Fit \n\t\tNF for Narrow-Fit  :: ";
        fflush(stdin); getline(cin,design1);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity1;
        cout<<endl<<"\t\tEnter Tie Design: \n\t\tST for Stripped Ties \n\t\tCT for Checkered Ties :: ";
        fflush(stdin); getline(cin,design2);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity2;
        Suit s(design2,quantity2,design1,quantity1,design,quantity);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }
        break;  
        case 8:
        {
        cout<<endl<<"\t\tEnter Shirt Design: \n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: ";
        fflush(stdin); getline(cin,design);
        cout<<endl<<"\t\tQuantity? : "; cin>>quantity;
        while(length!=7){
            cout<<endl<<"\t\tEnter 7 letter Discount Code: ";
            fflush(stdin); getline(cin,disc_code);
            length = disc_code.size();
        }
        Suit s(quantity,design,disc_code);
        cout<<endl;
        s.Display();
        cout<<endl;
        s.Stock_Details();
        cout<<endl;
        s.Revenue();
        }
        break;
        case 9:
        {   
            cout<<endl<<"\t\tEnter Design for shirt\n\t\tF for Formal \n\t\tT for Traditional \n\t\tC for Casual  :: "; fflush(stdin); getline(cin,design);
            cout<<endl<<"\t\tEnter Quantity: "; cin>>quantity;
            Shirt s(design,quantity);
            cout<<endl<<"\t\tEnter Design for Pant \n\t\tBB for Bell-Bottomed \n\t\tSF for Straight-Fit \n\t\tNF for Narrow-Fit  ::  "; fflush(stdin); getline(cin,design1);
            cout<<endl<<"\t\tEnter Quantity: "; cin>>quantity1;
            Pant p(design1,quantity1);
            if(s<p){
                cout<<endl<<"\t\tPRICE OF SHIRT IS LESS THAN PANTS";
            }
            else 
                cout<<endl<<"\t\tPRICE OF SHIRT IS MORE THAN PANTS";
        }

        break;
        case 10:
        cout<<endl<<"\tOkay!! Please Do Come Back !!";
        exit(0);         
    }
    cout<<endl<<endl<<"\t\tDo you Wish to Shop More From Diner's(Y/N): ";
    cin>>maybe;
    }
    
}