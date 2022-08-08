#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
class students{
    protected:
    int id;
    string name;
    static int count;
    public:
    void data(){
        cout<<endl<<"ENTER YOUR NAME: "; fflush(stdin); getline(cin,name);
    }
    void display(){
        cout<<endl<<"----------------------------------------------------";
        cout<<endl<<"\tSTUDENT NO."<<count+1; count++;
        cout<<endl<<"\tNAME: "<<name;
                                srand(time(0));
        cout<<endl<<"\tID: K21-"<<rand() % 9999 + 1000 + (count+1);
    }
};
int students :: count = 0;
class HCI : public students{
	protected: 
	int marks;
    public:
    void hci(){
        cout<<"ENTER MARKS FOR HCI: "; cin>>marks;
    }
    int gethcl(){
    	return marks;
	}
};
class DLD : public students{
	protected:
	int marks;
    public: 
    void dld(){
        cout<<"ENTER MARKS FOR DLD: "; cin>>marks;
    }
    int getdld(){
    	return marks;
	}
    
};
class OOP : public students{
	protected:
	int marks;
    public : 
    void oop(){
        cout<<"ENTER MARKS FOR OOP: "; cin>>marks;
    }
    int getoop(){
    	return marks;
	}
};
int main(){
    int n;
    cout<<endl<<"HOW MANY STUDENTS: "; cin>>n;
    students *s = new students[n];
    HCI *h = new HCI[n];
    DLD *obj = new DLD[n];
    OOP *p = new OOP[n];
    for(int i = 0 ; i<n ; i++){
        cout<<endl<<"FOR STUDENT NO."<<i+1<<endl;
    s[i].data();
    h[i].hci();
    obj[i].dld();
    p[i].oop();
    }
        int sum=0, sum1=0, sum2=0, pp;
    for(int i = 0 ; i<n ; i++){
        s[i].display();
        sum=h[i].gethcl()+sum;
        sum1=obj[i].getdld()+sum1;
        sum2=p[i].getoop()+sum2;
        pp++;
        cout<<endl<<"----------------------------------------------------"<<endl;
    }
    cout<<"\tTOTAL of HCL: "<<sum<<endl<<"\tTOTAL of DLD: "<<sum1<<endl<<"\tTOTAL of OOP: "<<sum2;
    cout<<endl<<"----------------------------------------------------"<<endl;
    cout<<"\tAVERAGE of HCL: "<<sum/n<<endl<<"\tAVERAGE of DLD: "<<sum1/n<<endl<<"\tAVERAGE of OOP: "<<sum2/n;

    cout<<endl<<"----------------------------------------------------"<<endl;

    delete h; delete s; delete obj; delete p;
}