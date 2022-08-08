#include<iostream>
using namespace std;
int n=0;
class Student{
        private:
        int Score[5];
        int k_score[5];
        int total;
        public:
        Student();
        void input(int);
        int CalculateTotalScore(int);
        void your_input();
        void compare(Student &obj){

}
};
Student :: Student(){
    Score[5]={0};
    total = 0;
}
void Student :: input(int k){
    cout<<endl<<endl<<"===For Student "<<k+1<<" ====";
    for(int i=0; i<5; i++){
        cout<<endl<<"Enter the Marks for subject#"<<i+1<<" :  ";
        cin>>Score[i];
    }
}
void Student :: your_input(){
    for(int i=0;i<5;i++){
        cout<<"Enter Kriesten's Subject #"<<i+1<<" Marks: "; cin>>k_score[i]; 
    }
    }


int main(){

    cout<<"How many students you want to compare Kriesten with: "; cin>>n;
    Student *obj = new Student[n];
    obj[0].compare(obj[0]);
}