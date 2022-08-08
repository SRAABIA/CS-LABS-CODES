#include<iostream>
using namespace std;
class CC{
    // private:
    public:
    static int obj;
    CC(){
    cout<<"     "<<obj<<endl;
    obj++;
    }
    ~CC(){  }
};
int CC :: obj = 1;

int main(){
    int n; 
    cout<<"How many objects are there? "; 
    cin>>n; 
    CC *obj = new CC[n];
    delete obj;
    return 0;
}