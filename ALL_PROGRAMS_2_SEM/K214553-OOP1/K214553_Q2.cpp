#include<iostream>
using namespace std;
class Cities{
    private:
    int peopleCount;
    float budget, expenses;
    public:
    void set_peopleCount(int y){    peopleCount = y; }
    void set_budget(float y){     budget = y; }
    void set_expenses(float y){   expenses = y; }
    int get_peopleCount(){   return peopleCount; }
    float get_budget(){    return budget; }
    float get_expenses(){  return expenses; }
};
class Provinces{
    private:
    int citiesCount, peopleCount;
    float budget, expenses;
    public:
    Cities citiesInProvince[4] ;
    void set_peopleCount(int y){    peopleCount = y; }
    void set_citiesCount(int y){    citiesCount = y; }
    void set_budget(float y){     budget = y; }
    void set_expenses(float y){   expenses = y; }
    int get_citiesCount(){   return citiesCount; }
    int get_peopleCount(){   return peopleCount; }
    float get_budget(){    return budget; }
    float get_expenses(){  return expenses; }
};
class Country{
    int provincesCount, peopleCount;
    float budget, expenses;
    // int sum_of_province[5]={0}, sum_of_country=0;

    public:
    Provinces provincesInCountry[5];
    void set_peopleCount(int y){    peopleCount = y; }
    void set_provinceCount(int y){    provincesCount = y; }
    void set_budget(float y){     budget = y; }
    void set_expenses(float y){   expenses = y; }
    int get_peopleCount(){   return peopleCount; }
    float get_budget(){    return budget; }
    float get_expenses(){  return expenses; }
    int get_provinceCount(){   return provincesCount; }

    void totalExpense(){
        int o, service_cost, h, f[5]={0};
        cout<<endl<<"       TOTAL EXPENSE CALCULATION CITY WISE";
        for (int i=0;i<5;i++){
            cout<<endl<<endl<<"       _______  PROVINCE::"<<i+1<<" _______";
        for(int j=0;j<4;j++){
            cout<<endl<<endl<<"   Enter people count for number# "<<i+1<<" Province of #"<<j+1<<" City: "; cin>>o;
            provincesInCountry[i].citiesInProvince[j].set_peopleCount(o);
            f[i] += provincesInCountry[i].citiesInProvince[j].get_peopleCount();
            provincesInCountry[i].set_peopleCount(f[i]);
            service_cost= o*53; //K214553
            provincesInCountry[i].citiesInProvince[j].set_expenses(service_cost);
            cout<<endl<<"   =Total expense for city#"<<j+1<<" is: "<<provincesInCountry[i].citiesInProvince[j].get_expenses();
            }
        }
    }
    void totalExpenses2(){
        int h[5]={0};
        cout<<endl<<"-------CALCULATING TOTAL EXPENSE OF PROVINCE AND COUNTRY----";
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                h[i] += provincesInCountry[i].citiesInProvince[j].get_expenses();
                provincesInCountry[i].set_expenses(h[i]);
            }
            cout<<endl<<"   Sum Of Province Expenses "<<i+1<<" is :"<<provincesInCountry[i].get_expenses();
            expenses += provincesInCountry[i].get_expenses();   //COUNTRY'S
        }
            cout<<endl<<endl<<"-- Sum Of Country Expenses is   : "<<expenses<<" --";
    }
    void highestExpensesP(){
        int max = provincesInCountry[0].get_expenses() , z=0;
        for(int i=0;i<5;i++){
            if(provincesInCountry[i].get_expenses() > max){
                max = provincesInCountry[i].get_expenses();
                z=i;
            }
        }
        cout<<endl<<"-------- DETAILS OF PROVINCE WITH HIGHEST EXPENSES ----------"<<endl;
        cout<<endl<<"-------- PROVINCE #"<<z+1<<" Has the Highest Expense --------"<<endl;
        for(int j=0; j<4 ; j++){
        cout<<endl<<"       CITY # "<<j+1;
        cout<<endl<<"   People count in CITY"<<j+1<<" Of this province is : "<<provincesInCountry[z].citiesInProvince[j].get_peopleCount();
        cout<<endl<<"   Budget Of City"<<j+1<<" is: "<<provincesInCountry[z].citiesInProvince[j].get_budget()<<" millions.";
        cout<<endl<<"   Expenses Of City"<<j+1<<" is: "<<provincesInCountry[z].citiesInProvince[j].get_expenses();
        }
        cout<<endl<<endl<<"       PROVINCE'S";
        cout<<endl<<"   Number Of People in This Province: "<<provincesInCountry[z].get_peopleCount();
        cout<<endl<<"   Budget Of This Province: "<<provincesInCountry[z].get_budget();
        cout<<endl<<"   Expenses Of This Province: "<<provincesInCountry[z].get_expenses();
    }
    void finalFunction(){
        int PROFIT=0, LOSS=0;
        cout<<endl<<"      CALCULATING LOSS AND PROFIT OF PROVINCES IN COUNTRY PAK"<<endl;
        cout<<endl<<"   #                                                       EXPENSE#                     BUDGET#          "<<endl;
        for(int i=0;i<5;i++){
            if(provincesInCountry[i].get_expenses()< provincesInCountry[i].get_budget()){
                PROFIT = provincesInCountry[i].get_budget()  - provincesInCountry[i].get_expenses() ;
                cout<<endl<<"   Province No."<<i+1<<" yields PROFIT of:     "<<PROFIT<<"                    "<< provincesInCountry[i].get_expenses()<<"                         "<<provincesInCountry[i].get_budget();
            }
            else{
                LOSS = provincesInCountry[i].get_expenses() - provincesInCountry[i].get_budget() ;
                cout<<endl<<"   Province No."<<i+1<<" yields LOSS   of:     "<<LOSS<<"                  "<< provincesInCountry[i].get_expenses()<<"                         "<<provincesInCountry[i].get_budget();
            }
            }
    }
};

int main(){
    Country Pak;    int a, b, k;
    Pak.set_budget(4553); //K214553
    a=Pak.get_budget();
    for (int i=0;i<5;i++){
        for(int j=0;j<4;j++){
        Pak.provincesInCountry[i].set_budget((float)a/5);
        b=Pak.provincesInCountry[i].get_budget();
        Pak.provincesInCountry[i].citiesInProvince[j].set_budget((float)b/4);
        }
    }
    // Pak.totalExpense();
    while(1){
    cout<<endl<<endl<<"-------------------------------------------------------------";
    cout<<endl<<"       SELECT IN ORDER \n";
    cout<<"     1) TOTAL EXPENSE OF EACH CITY\n     2) TOTAL EXPENSE OF PROVINCE AND COUNTRY\n     3) PROVINCE WITH HIGHEST EXPENSE\n     4)PROFIT/LOSS PROVINCE\n     5) EXIT"<<"    :=  ";
    cin>>k;
    cout<<endl<<endl<<"-------------------------------------------------------------";

    switch(k){
        case 1: 
        Pak.totalExpense();
        break;
        case 2:
        Pak.totalExpenses2();
        break;
        case 3:
        Pak.highestExpensesP();
        break;
        case 4:
        Pak.finalFunction();
        break;
        case 5:
        exit(1);
        break;
        }
    }
}