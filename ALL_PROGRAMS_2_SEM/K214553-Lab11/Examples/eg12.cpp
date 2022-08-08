#include<iostream>
using namespace std;
template <class T>
class mypair{
    T values[2];
    public:
    mypair(T first,T second){
        values[0]=first; values[1] = second;
    }
    void print(){
        int i=0;
        while(i<2){
            cout<<endl<<i<<"| "<<values[i];
            ++i;
        }
    }
};
int main(){
        mypair<int>myobj(115,36);
        myobj.print();
        mypair<double>myflo(3.0,2.18);
        myflo.print();
}