#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream openfile("myfile.txt");
    char ch;
    if(!openfile){
        cout<<"No such file";

    }
    else {
        while(!openfile.eof()){
            openfile.get(ch);
            cout<<ch;
        }
    }
    return 0;
}