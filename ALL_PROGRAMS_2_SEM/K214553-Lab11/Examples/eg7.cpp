#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char data[180];
    ofstream outfile;
    outfile.open("afile.dat");
    cout<<"Writing to file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data,160);
    outfile<<data<<endl;
    cout<<endl<<"enter your age: ";
    cin>>data;
    outfile<<data<<endl;
    outfile.close();

    ifstream infile;
    infile.open("afile.dat");
    cout<<"Reading from the file"<<endl;
    infile>>data;
    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();
    return 0;
}