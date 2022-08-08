#include<iostream>
using namespace std;
int main(){
	int marks[5],max=0;
	for(int i=0;i<5;i++){	
	cout<<"Enter marks for student("<<i+1<<"):  ";
	cin>>marks[i];
	if(marks[i]>max){
		max=marks[i];
	}
	}
	cout<<endl<<"Highest marks are: "<<max<<endl<<endl;
	cout<<"\tSTD.DEV:"<<endl;
	for(int k=0;k<5;k++){
		cout<<"student["<<k+1<<"]: "<<max-marks[k]<<endl;
	}
}