#include<iostream>
#include<conio.h>
using namespace std;
class Cafe{
    int product_price[5];
    int sold_code[5];
    int product_code[5];
    int quantity[5];
    int sold_quantity[5];
    int sold_left[5];

    public:
    Cafe(){
        sold_quantity[5]={0};
        sold_left[5]={0};
    }
    void input(){
        int i;
        for(i=0; i<5 ; i++){
            cout<<endl<<"Enter the Unique Code for Product "<<i+1<<"        : ";
            cin>>product_code[i];
            cout<<"Enter the Quantity for Product "<<i+1<<"           : ";
            cin>>quantity[i];
            cout<<"Enter the Price for Product "<<i+1<<"              : ";
            cin>>product_price[i];
            cout<<endl;
        }
    }
    void display(){
       int i;
       for(i=0;i<5;i++){
           cout<<endl;
       cout<<"                   Product ("<<i+1<<") Code:             "<<product_code[i]<<endl;
       cout<<"                   Product ("<<i+1<<") Quantity:         "<<quantity[i]<<endl;
       cout<<"                   Product ("<<i+1<<") Price:            "<<product_price[i]<<endl;
        cout<<endl;
       }
    }
    void old_add(){
        int i , code , amount;
       for(i=0;i<5;i++){
        cout<<endl;
        cout<<"                   ("<<i+1<<") Product # "<<product_code[i]<<endl;
       }
        cout<<"                   Which Product do you want to update? (Enter Product code):    ";
        cin>>code;
        cout<<"                   Enter the Quantity you want to add for this Product:          ";
        cin>>amount;
        for(i=0;i<5;i++){
            if(code==product_code[i]){
                product_price[i]=quantity[i]+amount;
                cout<<"                   Product#"<<product_code[i]<<" with quantity of "<<quantity[i]<<" has been updated to "<<quantity[i]+amount;
            }
        }
    }
    void new_add(){
        int i , code ,sample;
       for(i=0;i<5;i++){
        cout<<endl;
        cout<<"                   ("<<i+1<<") Product # "<<product_code[i]<<endl; 
       }
        cout<<"                   Which Product do you want to replace with the NEW PRODUCT? (Enter Product code): ";
        cin>>code;
        cout<<"                        -->Details of new Product <-- "<<endl<<endl;
        for(i=0;i<5;i++){
            if(code==product_code[i]){
                sample = product_code[i];
                cout<<"                   Enter the Unique Code of new Product      : ";
            cin>>product_code[i];
            cout<<"                   Enter the Quantity for new Product            : ";
            cin>>quantity[i];
            cout<<"                   Enter the Price for new Product               : ";
            cin>>product_price[i];
            cout<<endl<<"                   Old Production#"<<sample<<" is successfully replaced with New Product#"<<product_code[i]<<" !!";

            }
        }
        
    }
    int sell_prod(){
        static int k=0;
        int code,  i, amount = 0, temp;
        cout<<endl;
        cout<<"                   Enter the Product Code to sell:                 "; cin>>code;
        cout<<"                   Enter the Quantity of Product you want to sell: "; cin>>amount;
        for(i=0 ; i<5 ; i++){
            if(code == product_code[i]){
                temp = quantity[i] ;
                quantity[i] -= amount;
                cout<<"                   Product#"<<product_code[i]<<" is sold successfully.";
                sold_code[k] = product_code[i];
                sold_quantity[k] = amount;
                sold_left[k]= temp - sold_quantity[k];   
            }
        }
        k++;
        return k;
    }
    void total_sold(int sum){
        int k;
        cout<<"                   --> List Of Products Sold <--"<<endl;
        for(k=0;k<sum;k++){
            cout<<endl<<"                   Product Code:          "<<sold_code[k];
            cout<<endl<<"                   Product Quantity Sold: "<<sold_quantity[k];
            cout<<endl<<"                   Product Quantity Left: "<<sold_left[k];
            cout<<endl;
        }
    }
    void show_total_sold(int sum){
        int k, total=0, remaining = 0;
        for(k=0;k<sum;k++){
            total += sold_quantity[k];
            remaining += sold_left[k];
        }
        cout<<endl<<"                   Total Product Sold:              "<<total;
        cout<<endl<<"                   Total Products in the inventory: "<<remaining;
    }
    
};
int main(){
    int choice , i, sum=0;
    cout<<"================================================================="<<endl;
    cout<<"                          WELCOME TO THE CAFE                    "<<endl;
    cout<<"================================================================="<<endl;
    Cafe obj;
    obj.input();
    while(1){
    cout<<endl<<endl<<"    ---> SELECTION CHOICE <---    "<<endl<<"(1) Display all stored Products: "<<endl<<"(2) Add an old Product: "<<endl<<"(3) Add a new Product: "<<endl<<"(4) Sell a Product: "<<endl<<"(5) Total Sold Products: "<<endl<<"(6) Show Total Products Sold: "<<endl<<"(7) Quit "<<endl<<endl<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        obj.display();
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;
        case 2:
        obj.old_add();
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;
        case 3:
        obj.new_add();
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;
        case 4:
        sum = obj.sell_prod();
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;    
        case 5:
        obj.total_sold(sum);
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;  
        case 6:
        obj.show_total_sold(sum);
        cout<<endl<<"Press enter to Continue.";
        getch();
        break;
        case 7:
        exit(0);
        break;
    }  
    }

}