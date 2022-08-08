#include<iostream>
using namespace std;
class Books{
    protected:
    string genre;
    string title;
    string author;
};
class Fiction : public Books{
    public:
    void input(){
        cout<<endl<<"BOOK 1: ";
       cout<<endl<<"Enter Genre for Book category 1: ";
       getline(cin,genre);
       cout<<endl<<"Enter title for Book category 1: ";
       getline(cin,title);
       cout<<endl<<"Enter author for Book category 1: ";
       getline(cin,author);
    }
    void display(){
        cout<<endl<<"BOOK 1: ";
        cout<<endl<<"GENRE: "<<genre;
        cout<<endl<<"TITLE: "<<title;
        cout<<endl<<"AUTHOR: "<<author;
    }
    
};
class Novel : public Books{
    
    public:
    void input(){
        cout<<endl<<"BOOK 2: ";
       cout<<endl<<"Enter Genre for Book category 2: ";
       getline(cin,genre);
       cout<<endl<<"Enter title for Book category 2: ";
       getline(cin,title);
       cout<<endl<<"Enter author for Book category 2: ";
       getline(cin,author);
    }
    void display(){
        cout<<endl<<endl<<"BOOK 2: ";
        cout<<endl<<"GENRE: "<<genre;
        cout<<endl<<"TITLE: "<<title;
        cout<<endl<<"AUTHOR: "<<author;
    }
};
int main(){
     Fiction F;
    F.input();
    Novel N;
    N.input();
    F.display();
    N.display();
   
}