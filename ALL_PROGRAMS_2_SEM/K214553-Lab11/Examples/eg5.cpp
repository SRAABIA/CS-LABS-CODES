#include<iostream>
#include<fstream>
using namespace std;
int main(){ 
    fstream openfile("my_file.txt");
    string line;
    while(!openfile.eof())
    {
        getline(openfile,line);
        cout<<line;

    }
    openfile.close();
    return 0;
}