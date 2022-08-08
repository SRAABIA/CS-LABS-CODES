#include<iostream>
using namespace std;
template <class T>
T max1(T a, T b){
    return a>b?a:b;
}
int main(){
    cout<<"max(10,15) = "<<max1<int>(10,15)<<endl;
    cout<<"max('k','s') = "<<max1<char>('k','s')<<endl;
    cout<<"max(11.1, 18.2) = "<<max1<float>(11.1,18.2)<<endl;
    cout<<"max(\"Waqas\",\"Amir\") = "<<max<string>("Waqas","Amir")<<endl;
    return 0;
}