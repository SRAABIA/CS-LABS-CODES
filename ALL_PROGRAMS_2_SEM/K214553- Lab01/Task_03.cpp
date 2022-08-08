#include<iostream>
using namespace std;
int main(){
	int leave[4];
	cout<<"  Students please enter number of leaves: "<<endl;
	for(int i=1;i<4;i++){
		cout<<"Student["<<i<<"]: ";
		cin>>leave[i];
			for(int j=0;j<i;j++){
				if(leave[i]==leave[j]){
					while(leave[i]==leave[j] || leave[i]==leave[j-1]){
						cout<<endl<<"Student["<<i<<"] re-enter your leave: ";
						cin>>leave[i];
					}
				}						
			}
	}
	cout<<endl<<"Incremented Leaves"<<endl;
	for(int h=1;h<4;h++){
		cout<<"Student["<<h<<"] LEAVE: "<<leave[h]+5<<endl;
		
	}
}
