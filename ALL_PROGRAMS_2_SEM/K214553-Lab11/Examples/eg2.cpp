#include<iostream>
#include<fstream>
using namespace std;
int main(){ 
    fstream my_file;
    my_file.open("my_file",ios::out);
    if(!my_file){
        cout<<"File not created";
    }
    else {
        cout<<"File created Successfully";
        my_file.close();
    }
        my_file.close();

    
}