#include<iostream>
#include<conio.h>
using namespace std;

class BookShop{
    private:
    string author, title, publisher;
    int price, stock_position;
    
    public: 
    BookShop(){}

    BookShop(string author, string title , string publisher, int price, int stock){
       this-> author = author;
       this-> title = title; 
       this-> publisher = publisher;
       this-> price = price;
       this-> stock_position = stock;
    }
    BookShop(const BookShop& book){
        this-> author = book.author;
        this-> title = book.title; 
        this-> publisher = book.publisher;
        this-> price = book.price;
        this-> stock_position = book.stock_position;

    }
    void store_data(int &i, BookShop &obj){
        cout<<endl<<"___________________________________________________________";
		cout<<endl<<"For Book No."<<i+1;
        cout<<endl<<"___________________________________________________________";
        cout<<endl<<"Enter the Title:                                   ";
        fflush(stdin);
        getline(cin,obj.title);
        cout<<endl<<"Enter the Author:                                  ";
        fflush(stdin);
        getline(cin,obj.author);
        cout<<endl<<"Enter Publisher:                                   ";
        fflush(stdin);
        getline(cin,obj.publisher);
        cout<<endl<<"Enter Price:                                       ";
        cin>>obj.price;
        cout<<endl<<"Enter number of stocks we will have in book store: ";
        cin>>obj.stock_position;
        cout<<endl<<"Press enter to continue..."<<endl;
        
        getch();
    }

    int Search(string t, string a){ //bookstore&obj
    int how, i;
    int flag=0;
    // cout<<endl<<"here"<<endl;
    if(t== title && a==author){
		flag=1;
        // cout<<endl<<"author and title are matched"<<endl;
    	if(stock_position > 0){
   		
    		cout<<endl<<"Availability: "<<stock_position;
            cout<<endl<<"How many copies of "<<t<<" do you want? ";
    		cin>>how;
            if(how > stock_position) cout<<endl<<"We only have "<<stock_position<<" books. ";
            else {
                stock_position -= how;
                cout<<endl<<"Books Are Yours!!"<<endl;
                cout<<endl<<"Title: "<<title;
                cout<<endl<<"Author: "<<author;
                cout<<endl<<"Publisher: "<<publisher;
                
                cout<<endl<<"==================================================================="<<endl;   		
                }
		}
        else cout<<"Required no. copies not in stock.";
		getch();
		}
    else return flag;
//    getch();
    return flag;
	}
};

int main(){
    int n,i,choice;
    string t,a;
   int flag=0;
    cout<<endl<<"How many Books are there in library: ";
    cin>>n;
    BookShop*book=new BookShop[n];
    while(1){
    cout<<endl<<"*******************************MENU*****************************************"<<endl<<endl<<"1) Enter book data."<<endl<<"2) Search For Book."<<endl<<"3) Exit."<<endl<<"Choose An Option: ";
    cin>>choice;
    switch(choice){
        case 1: 
            cout<<endl<<"------Please enter the information about the books in our book store: ------";
            for (i=0;i<n;i++){
                book[i].store_data(i,book[i]);
            }
        break;
        case 2:
            cout<<endl<<"SEARCHING........"<<endl;
            cout<<"Enter the Title: ";
            fflush(stdin);
            getline(cin,t);
            cout<<"Enter the Author's Name: ";
            fflush(stdin);
            getline(cin,a);
            for(i=0;i<n;i++){    
            flag = book[i].Search(t,a);
            if(flag==1){
                    break;
            }
                        else if(flag==0) {
						cout<<endl<<"SORRY NO SUCH BOOK FOUND.";
						break;
						}
            }
            
        break;
        case 3:
        cout<<endl<<"********************************XX****************************************";
        exit(0);
        break;

    }
    }
}