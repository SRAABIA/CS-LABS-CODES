#include<iostream>
using namespace std;
class  Glass{
    int water;
    int liquid_levels=200;
    public:
    void drink(int how ){  

        liquid_levels =  liquid_levels-how; 
        cout<<endl<<"Your Glass now contain "<<liquid_levels<<" ml";
        if(liquid_levels<101){
        	Refills();           
         }
         else {
         	cout<<endl<<"Please Continue..";
		 }

  }
    void Refills(){
    	liquid_levels=200;
    	cout<<endl<<endl<<"Glass has been refilled to full (200 ml) "<<endl<<"Please Continue..";
    	cout<<endl<<"==============================================";
		    }
};
int main(){
    Glass cup;
    int how;
    cout<<"(Press 0 for termination of program)"<<endl;
    while(how!= 1){
    	cout<<endl<<endl<<"==============================================";
        cout<<endl<<endl<<"How much liquid a person drank ??  ";
        cin>>how;
    	cout<<endl<<"==============================================";

        if(how==0){exit(1);
		}
        else if(how<0 || how>200){
        
        	cout<<endl<<"Exceeds the capacity man!!";
		}
		else{			
				cup.drink(how);	
		}
	}
    
}