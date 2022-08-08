#include<iostream>
using namespace std;
int n=0;
class Student{
        private:
        int Score[5];
        int total;
        public:
        Student();
        void input(int);
        int CalculateTotalScore(int);
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
int Student :: CalculateTotalScore(int k){
    for(int i=0; i<5; i++){   total += Score[i];    }
    return total;
}

int main(){
    int i, temp, count=0, flag = 0;
    cout<<"Include how many students you want to compare Kriesten with: ";
    cin>>n;
    Student *obj = new Student[n];
    int array[n];
    for(i=0;i<n;i++){
        if(i==0){ cout<<endl<<"Kriesten's Scores:: "; }
        obj[i].input(i);
        array[i]=obj[i].CalculateTotalScore(i);
        cout<<endl<<"The Total Score of Student "<<i+1<<" is: "<<array[i];
    }
    for(i=1 ; i<n ; i++){
        for(int j=i+2 ; j<n ; j++){
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }   
    }
     for(i=1 ; i<n ; i++){
        if(array[0]<array[i]){
        count++;
        }
    }
    if(count!=0)
    cout<<endl<<"Number of Students scored Higher than Kristien is: "<<count;
    else cout<<endl<<"Congrats!! Nobody scored Higher than Kristien!!";
}