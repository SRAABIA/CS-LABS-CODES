#include<iostream>
using namespace std;
class Date{
	int month,day,year;
	public:
    Date(int d,int m,int y){
    	if(m>0&&m<13){
        month = m;
        day = d;
        year = y;}
       
    }   	
        void display_date(){
            cout<<"Date is : "<<day<<" / "<<month<<" / "<<year;
        }
        
};
int main(){
	int a,b,c;
   cout<<"enter day/month/year: ";
	cin>>a>>b>>c;
	Date testdate(a,b,c);
   testdate.display_date();
}