#include<iostream>
using namespace std;
template<class T>
class addition{

	  public:
	  	T a,b;
	  	void ask(){
	  		cout<<"Enter First num: ";
	  		cin>>a;
	  		cout<<"Enter second num: ";
	  		cin>>b;
	  		
		  }
		  T add(T a , T b){
		  	return a+b;
		  }
		  void show(){
		  	cout<<add(a,b);
		  }
	  
};
int main(){
	addition<float>obj;
	obj.ask();
	obj.show();
	return 0;
}

