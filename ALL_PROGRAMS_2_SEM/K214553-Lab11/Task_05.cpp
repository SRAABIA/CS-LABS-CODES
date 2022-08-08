#include<iostream>
#include<fstream>
using namespace std;
void func(){
    fstream aa("Story.txt",ios::app);
    string line;
    char m = 'n';
    do{
        cout<<"Enter Line: ";
        fflush(stdin);
        getline(cin,line);
        aa<<line<<endl;
        cout<<endl<<"Do you want to enter more lines? ";
        cin>>m;
    } while (m == 'y' || m == 'Y');
    aa.close();
}
void Count(){
    fstream aa("Story.txt",ios::in);
    string line;
    int count=0;
    while(!aa.eof()){
        getline(aa,line);
        // cout<<line.data()<<endl; //read first line all at once
        if(line[0]=='a'||line[0]=='A'){
            count++;
        }
    }
    cout<<endl<<"'A' appeared "<<count<<" time.";
    aa.close();
}
int main(){
    func();
    Count();
}