#include<iostream>
using namespace std;
class T_SHIRTS{
    protected:
    static int count;
    public:
    T_SHIRTS(){
        count++;
    }
};
int T_SHIRTS :: count = 0;
class V_NECK : public T_SHIRTS{
    static int c;
    public:
    V_NECK(){
        c++;
    }
    void display(){
        cout<<endl<<"Current count of T-SHIRTS in the basket is :: "<<count<<endl;
        cout<<endl<<"Current count of V_NECK T-SHIRTS in the basket is :: "<<c<<endl;
    }
};
int V_NECK :: c = 0;
class O_NECK : public T_SHIRTS{
    static int calc;
    public:
    O_NECK(){    
    calc++;
    }
    void display(){
        cout<<endl<<"Current count of T-SHIRTS in the basket is :: "<<count;
        cout<<endl<<"Current count of O_NECK T-SHIRTS in the basket is :: "<<calc;
    }
};
int O_NECK :: calc = 0;
int main(){
    char hi , ans;
    int x = 0 ;
    static int a = 0 , p = 0 ;
    do{
       cout<<endl<<"WELCOME TO DARAZ.PK";
       cout<<endl<<"Which T-Shirt YOU WANA BUY? ( V / O ) :: ";
       cin>>hi;
       if(hi == 'V' || hi == 'v'){
            cout<<endl<<"HOW MANY V-NECK T-Shirts YOU WANA BUY:: ";
            cin>>x;
            a+=x;
            V_NECK *cc = new V_NECK[a]; 
            cc[0].display();            
            delete cc; 
       }
       else if(hi == 'O' || hi == 'o'){
            cout<<endl<<"HOW MANY O-NECK T-Shirts YOU WANA BUY:: ";
            cin>>x;
            p+=x;
            O_NECK *tea = new O_NECK[p];
            tea[0].display();
            delete tea; 
       }  
        cout<<endl<<"DO YOU WISH TO DO MORE SHOPPING? (Y/N):: "; cin>> ans;
   }while(ans!='n' && ans !='N');
}