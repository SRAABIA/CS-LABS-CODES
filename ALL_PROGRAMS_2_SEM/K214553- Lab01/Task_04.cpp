#include<iostream>
using namespace std;
int main(){
	int a, *ptra=&a;
	char b, *ptrb=&b;
	float c, *ptrc=&c;
	bool d, *ptrd=&d;
	cout<<"Enter integer"<<endl;
	cin>>(*ptra);
	cout<<"Enter character"<<endl;
	cin>>(*ptrb);
	cout<<"Enter float"<<endl;
	cin>>(*ptrc);
	cout<<"Enter boolean ?\n  (TRUE=1 FALSE=0)  "<<endl;
	cin>>(*ptrd);
	cout<<"int: "<<*ptra<<"\nchar: "<<*ptrb<<"\nfloat: "<<*ptrc<<"\nbool: "<<*ptrd<<endl;

	
}