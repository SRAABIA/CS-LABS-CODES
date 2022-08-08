#include<iostream>
using namespace std;
class father{
    public:
    void function(void){
        cout<<endl<<"Father's Class";
    }
};
class son : public father{
    public:
    void function(void){
        cout<<endl<<"The Function Of Son";
    }
};
int main(){
    son son;
    son.function();
}