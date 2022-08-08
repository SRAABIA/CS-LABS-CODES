#include<iostream>
#include<cmath>
using namespace std;
float residential();
float business();
int main(){
	int account_num,cutomer_code;
    char type;
    cout<<endl<<"Enter the type of the customer(R or r for residential and B or b business): ";
    cin>>type;
    cout<<endl<<"Enter Account Number: ";
    cin>>account_num;
    cout<<endl<<"Enter Customer Code: ";
    cin>>cutomer_code;
    if(type=='r'||type=='R')
    {
        float sum= residential();
        cout<<endl<<"Account Number: "<<account_num;
        cout<<endl<<"Billing Amount: PKR "<<sum;
    }
    else if(type=='b'||type=='B')
    {
        float sum = business();
        cout<<endl<<"Account Number: "<<account_num;
        cout<<endl<<"Billing Amount: PKR "<<sum;

    }  
    cout<<endl<<"------------------------------------------------------------------------";
}
float residential(){
    float bill_processing_fee = 4.50;
    float basic_service_fee = 20.50;
    float premium_channel=7.50;
    int connections;
    cout<<endl<<"Enter Number Of Basic Connections: ";
    cin>>connections;
    float sum=0;
    sum= bill_processing_fee+basic_service_fee+(premium_channel*connections);
    return sum;
}
float business(){
    float sum=0;
    float bill_processing_fee = 15.00;
    int connections, premium_no; 
    int new_connections;
    float basic_service_fee=0;
    cout<<endl<<"Enter Number Of Basic Connections: ";
    cin>>connections;
    cout<<endl<<"Enter Number Of Premium Channels: ";
    cin>>premium_no;
    new_connections = connections - 10;
    if(new_connections > 0){
        basic_service_fee = ( new_connections *5) + (10*75.00);
    }
    else {
        new_connections = abs(new_connections);
        basic_service_fee = new_connections*75.00;
    }
    sum = bill_processing_fee + basic_service_fee + (premium_no*50.00);
    return sum;
}