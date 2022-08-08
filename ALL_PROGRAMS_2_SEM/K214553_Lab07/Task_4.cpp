#include<iostream>
using namespace std;
class Multiplication{
    public:
    int product(int x,int y){
        return x*y;
    }
    int product(int x,int y, int z){
        return x*y*z;
    }
    double product(double x,double y){
        return x*y;
    }
    double product(double x,double y,double z){
        return x*y*z;
    }

};
int main(){
    int l,p,n,x,y;
    double a,b,c,s,t;
    Multiplication m;
    cout<<"\nEnter two integers: "; cin>>x>>y;
    cout<<"\n   "<<m.product(x,y);
    cout<<"\nEnter three integers: "; cin>>l>>p>>n;
    cout<<"\n   "<<m.product(l,p,n);
    cout<<"\nEnter two decimals: "; cin>>s>>t;
    cout<<"\n   "<<m.product(s,t);
    cout<<"\nEnter three decimals: "; cin>>a>>b>>c;
    cout<<"\n   "<<m.product(a,b,c);
}
