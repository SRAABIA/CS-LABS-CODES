#include<iostream>
#include<fstream>
using namespace std;
int main(){ 
    ofstream my_file("XYZ");
    if(!my_file){
        cout<<"File not created";
    }
    else {
        cout<<"File created Successfully";
        my_file.close();
    }
        my_file.close();

    
}