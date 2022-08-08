#include<iostream>
#include<conio.h>
using namespace std;
class MenuItem{
        public:
        string name_of_item;
        string type;
        int price;
        MenuItem(){}
};
class CoffeeShop{
    public:
    string Name_of_shop;
    MenuItem *menu ;
    //string order_names;
    string Orders[30]= {"\0"};
    int money[30]={0};
    void input(int item){
        int s;
        for(s=0;s<item;s++){
        cout<<endl<<"================================================================================"<<endl;
        cout<<"Item "<<s+1<<" :";
        cout<<endl<<"================================================================================"<<endl;
        cout<<"Enter the name of Item:                                  ";
        fflush(stdin);
        getline(cin,menu[s].name_of_item);
        
        cout<<"Enter the Type of Item(drink / food):                    ";
        fflush(stdin);
        getline(cin,menu[s].type);

            if(   menu[s].type != "drink" &&   menu[s].type != "food"     ){
                 while(  menu[s].type != "drink"  &&   menu[s].type != "food"   ){
                    cout<<endl<<"xxx Enter Valid Type Of Item. xxx"<<endl<<endl;
                        cout<<"Enter the Type of Item(drink / food):                    ";
                        fflush(stdin);
                        getline(cin,menu[s].type);                         
                        }
            } 
        cout<<"Enter the price per item:                                ";
        cin>>menu[s].price;
        }
        cout<<endl<<"ALL ITEMS HAVE BEEN SUCCESSFULLY ADDED!!"<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
        getch();
    }
    void addOrder(int item){
        string my_order;    int k;  int flag=0;
        cout<<endl<<"                   Please record your Order here: ";
                                        fflush(stdin);
                                        getline(cin,my_order);
        static int j=0;
        for(k=0;k<item; k++){

            if( my_order == menu[k].name_of_item ){
                     Orders[j] = menu[k].name_of_item;
                     money[j]=menu[k].price;
                     j++;
                    cout<<endl<<"Your order has been successfully placed. ";
                    flag=1;
                    break;
            }
        }
        if(flag=0){
                cout<<endl<<"Item NOT Available! "<<endl;
            }
    }
    void fulfillOrder(){
        int i;
        for(i=0;i<30;i++){
            if(Orders[i] != "\0"){
                cout<<endl<<"                    The "<<Orders[i]<<" is ready.";
                }
            else 
            {   cout<<endl<<"                   All orders have been fulfilled."<<endl;
                break;
            }   
        }
    }
    void listOrder(){
        int i;
        for(i=0;i<30;i++){
        if(Orders[i] != "\0"){
            cout<<endl<<"                   ORDER "<<i+1<<" :"<<Orders[i];
        }
        else 
        {   cout<<endl<<"                   There are no Orders!"<<endl;
            break;
        } 

        }
    }
    void dueAmount(){
        int k;
        int sum=0;
        string food;
        for (k=0;k<30;k++){
            if(Orders[k]!="\0"){
            cout<<endl<<"                    Order "<<k+1<<": "<<Orders[k]<<"      costed $"<<money[k];
            sum+=money[k];
            }
            else 
            {   cout<<endl<<"                   There is no Due Amount!"<<endl;
                break;
            } 

        }
        cout<<endl<<"____________________________________________________________________________________________"<<endl<<"                   The due Amount is : "<<sum<<endl;
    }
    void cheapestItem(int item){
        int k, min=0;
        for(k=0;k<item;k++){
            if(menu[k].price < menu[min].price){
                min=k;
            }
        }
        cout<<endl<<"                   The cheapest item is "<<menu[min].name_of_item<<" and it costs $"<<menu[min].price<<endl;
    }
    void drinksOnly(int item){
        int k;
        for(k=0;k<item;k++){
            if(menu[k].type == "drink"){
                cout<<endl<<"                   The item "<<menu[k].name_of_item<<" is of the drink type in the menu!";
            }
           // else cout<<endl<<"drinks only"<<endl;
        }
    }
    void foodOnly(int item){
        int k;
        for(k=0;k<item;k++){
            if(menu[k].type == "food"){
                cout<<endl<<"                   The item "<<menu[k].name_of_item<<" is of the food type in the menu!";
            }
        }
    }
    void setter_name_of_shop(string a){
        Name_of_shop = a;
    }
};
int main(){
    CoffeeShop cup;
    int choice;
    string a;
    cout<<"Enter the name of the Shop: ";
    getline(cin,a);
    cup.setter_name_of_shop(a);
    int item, s ;
        cout<<"How many Items you want to add: ";
        cin>>item;
        cup.menu = new MenuItem[item];
    cup.input(item);
    //pehly items store krvanay hain
    while(1){
            cout<<endl<<"================================================================================";
            cout<<endl<<"                            WELCOME TO "<<a;
            cout<<endl<<"================================================================================"<<endl;
    cout<<endl<<"1) Place an order."<<endl<<"2) Fulfill your order."<<endl<<"3) List all order."<<endl<<"4) Print Due Amount."<<endl<<"5) Find the Cheapest Item."<<endl<<"6) Find Only Drinkable items."<<endl<<"7) Find Only Food items."<<endl<<"8) Exit."<<endl<<endl<<"Enter Your Choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
            cup.addOrder(item);
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 2:
            cup.fulfillOrder();
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 3:
            cup.listOrder();
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 4:
            cup.dueAmount();
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 5:
            cup.cheapestItem(item);
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 6:
            cup.drinksOnly(item);
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 7:
            cup.foodOnly(item);
            cout<<endl<<"PRESS ANY KEY TO PROCEED!"<<endl;
            getch();
        break;
        case 8:
        exit(0);
        break;
    }
    }
}