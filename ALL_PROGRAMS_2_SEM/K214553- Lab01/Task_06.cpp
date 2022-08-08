#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int  arr[3]={0};
	int*a = arr;
//	int x=9, y=12, z=15; for  right triangle
	cout<<"Enter value of x: ";
	cin>> (a[0]);
	
	cout<<"Enter value of y: ";
	cin>> (a[1]);
	
	cout<<"Enter value of z: ";
	cin>> (a[2]);

	if(a[2]<a[0] || a[2]<a[1]){
		while(a[2]<a[0] || a[2]<a[1]){
			cout<<"Enter value of z greater than x and y:  ";
			cin>> (a[2]);
		}
	}	
	cout<<endl;
	if((pow(a[0],2)+pow(a[1],2))==pow(a[2],2)){
		cout<<"\tRight Triangle";
	}
	else if((pow(a[0],2)+pow(a[1],2))>pow(a[2],2)){
		cout<<"\tObtuse Triangle";
	}
	else cout<<"\tAcute Triangle";
	
}