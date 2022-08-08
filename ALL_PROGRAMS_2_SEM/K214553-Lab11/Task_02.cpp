#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f("one.txt",ios::out);
    fstream g("two.txt",ios::out);
    f<<"HI i am file one";
    string s;
    f.close();
    fstream d("one.txt",ios::in);
    while(!d.eof()){
        d>>s;
        g<<s;
    }
    d.close();
    g.close();
}