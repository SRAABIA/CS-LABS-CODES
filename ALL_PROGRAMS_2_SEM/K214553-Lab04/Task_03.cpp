#include<iostream>
using namespace std;
class Invoice{
    int part_number ,  quantity , price_per_item;
    string part_description;

    public:
    Invoice(int num, string describe , int no_of_parts, int price_per){
        this->part_number = num;
        this->part_description = describe;
        this->quantity = no_of_parts;
        this->price_per_item = price_per;
    }
    void setter_part_number(int n){
        part_number= n;
    }
    void setter_quantity(int n){
        quantity= n;
    }
    void setter_price_per_item(int n){
        price_per_item = n;
    }
    void setter_describe(string g){
        part_description = g;
    }
    
    void take_input(void){
        int A,B,C;
        string D;
        cout<<endl<<"Enter the part number: ";
        cin>>A;
        setter_part_number(A);
        cout<<endl<<"Enter the part description: ";
        cin>>D;
        setter_describe(D);
        cout<<endl<<"Enter the quantity of parts: ";
        cin>>C;
        setter_quantity(C);
        cout<<endl<<"Enter the price per part: ";
        cin>>B;
        setter_price_per_item(B);
    }
    double Total_invoice(void){        
        return price_per_item*quantity;
    }
};
int main(){
    Invoice acc(0," ",0,0);
    acc.take_input();
    cout<<endl<<"Total Invoice Amount: "<<acc.Total_invoice();

}