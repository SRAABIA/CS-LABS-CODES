#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string n;
    cout<<"Enter: "; getline(cin,n);
    fstream k("op.txt",ios::out);
    k<<n;
    k.close();
    int len = n.length();
    cout<<endl<<"Length of String is: "<<len<<endl;
    k.open("op.txt",ios::in);
    char c;
    while(k.get(c)){
        cout<<" "<<c;
    }
    k.close();
}