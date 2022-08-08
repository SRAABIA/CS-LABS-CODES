#include<iostream>
using namespace std;
int main(){
	float A=0;
	float p=0;
	float IQ=0;
	cout<<"A\t  "<<"P\t"<<"  IQ_SCORES"<<endl;
	for(A=1;A<=10;A+=1){
		for(p=5.5;p<14.6;p+=0.56){
		IQ= 2+(A+(0.5*p));
		cout<<A <<"\t  "<< p<<"\t|   "<< IQ<< endl;
		}
	}
}