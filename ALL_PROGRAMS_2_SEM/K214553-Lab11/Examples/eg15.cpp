#include<iostream>
using namespace std;

int main(){
int x=-1;
try {
    if(x<0){
        throw x;
        cout<<"After throw (never executed)\n";
    }

}   
catch (int x){
    cout<<"exception Caught\n";
} 
cout<<"After catch(will be executed)\n";
}