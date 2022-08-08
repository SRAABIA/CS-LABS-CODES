#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Participant{
    int id;
    char name[15];
    int score;
    public:
    void Input(){
        Participant p;
        fstream kk("participant.dat",ios::app);
        cout<<endl<<"Enter Name: "; fflush(stdin); cin.getline(p.name,15);
        cout<<endl<<"Enter ID: "; cin>>p.id;
        cout<<endl<<"Enter Score: "; cin>>p.score;
        kk.write((char*)&p,sizeof(p));
        kk.close();    
    }
    void Output(){
        Participant pp;
        int id;
        cout<<endl<<"Enter The ID you want to search:: "; cin>>id;
        fstream mm("participant.dat",ios::in);
        while(!mm.eof()){
            mm.read((char*)&pp,sizeof(pp));
            if(id==pp.id)
            { 
                cout<<endl<<"Name: "<<pp.name;
                cout<<endl<<"ID: "<<pp.id;
                cout<<endl<<"Score: "<<pp.score;
            }
        }
        mm.close();
    }
    void Max(){
        Participant pp;
        int max = 0;
        char n[15];
        int id;
        fstream mm("participant.dat",ios::in);
        while(!mm.eof()){
            mm.read((char*)&pp,sizeof(pp));
            if(pp.score>=max)
            { 
                max = pp.score;
                id = pp.id;
                strcpy(n,pp.name);
            }
           
        }
        cout<<endl<<"Max Score: "<<max;
        cout<<endl<<"Name: "<<n;
        cout<<endl<<"ID: "<<id;
        mm.close();
    }
};
int main(){
    Participant  s;
    char c = 'n';
    do
    {
        s.Input();
        cout << "Do you want to add another record:: ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    cout << "\ndata written successfully";
	cout<<endl<<"--------------------"<<endl;
	s.Output();
    cout<<endl<<"--------------------"<<endl;
    s.Max();
}