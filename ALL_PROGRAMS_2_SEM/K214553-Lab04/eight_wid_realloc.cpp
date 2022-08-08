#include<iostream>
#include<vector>

using namespace std;
class Seasons{
    private: 
    string name;
    int serial_code;
    int number_of_episodes;
    int duration_of_ep;
    public:
    Seasons(){}
    void input(Seasons &obj){
        cout<<endl<<"Enter the Season's Name: ";
        fflush(stdin);
        getline(cin,obj.name);
        cout<<"Enter the Season's Serial Code: ";
        cin>>obj.serial_code;
        cout<<"Enter number of episodes: ";
        cin>>obj.number_of_episodes;
        cout<<"Enter the duration: ";
        cin>>obj.duration_of_ep;
    }
    void details(Seasons &obj){
        cout<<endl<<"           Season's Title is:                     "<<obj.name;
        cout<<endl<<"           Season's Serial Code is:               "<<obj.serial_code;
        cout<<endl<<"           Season's Total Episodes are:           "<<obj.number_of_episodes;
        cout<<endl<<"           Season's Each Episode's Duration is:   "<<obj.duration_of_ep;
        
    }
    ~Seasons(){
        cout<<endl<<"deleted";
    }
};
int main(){
    int *n = 0;
    // Seasons *drama = new Seasons[*n];
    // int *new_ptr;
    vector<Seasons> drama (*n);
    int i;
    int count=0;
    string ya;
    cout<<endl<<endl<<"==================================XX====================================="<<endl<<endl;

    while(ya!="no"){
        drama[*n].input(drama[*n]);
        cout<<"Do you wish to continue(yes/no): ";
        cin>>ya;
        n++;
        count++;
    /*REALLOCATING*/
        n = (int*) realloc(n, 1*sizeof(int));

    }
    cout<<endl<<endl<<"The Details Of The Entered Seasons Are: "<<endl;
    for(i=0;i<count;i++){
        cout<<endl<<endl<<"Details of Season "<<i+1<<"'s are: "<<endl;
        drama[i].details(drama[i]);
    }
    cout<<endl<<endl<<"==================================XX====================================="<<endl<<"oki bye;"<<count;
}