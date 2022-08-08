#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void take_input(){
    fstream ob("input.txt",ios::out);                 //opening file in writing mode
    string line = "r3d hp";
    cout<<"Enter the line you want to encrypt:: "<<endl;
    fflush(stdin);
    getline(cin,line);
    ob<<line;                                       //writing data to file
    ob.close();
}

void code(){
    cout<<endl;
    char ch;
    fstream oe("input.txt",ios::in);                 //opening file in reading mode
    fstream of("output.txt",ios::out);              //opening file in writing mode
    while(!oe.eof()){
        string strr ;
        static int d = 0 ;
        oe>>strr;                                   //reading word by word from file and storing in strr
        int flay = 0;
        char array[strr.length()] = {};             //length of given word
        for(int i=0 ; i < strr.length() ; i++){     //checking if it is a number
           if( !(strr[i-1]>=48 && strr[i-1]<=57) && strr[i]==48 && !(strr[i+1]>=48 && strr[i+1]<=57)){
               of.put('Z');
                cout<<"Z";
           }
           else if(strr[i]>=48 && strr[i]<=57){
//                 cout<<endl<<strr[i]<<" is a number";
                if((strr[i-1]>=48 && strr[i-1]<=57)||(strr[i+1]>=48 && strr[i+1]<=57))
				{
				flay +=1;
                array[d]=strr[i]-48;
                d++;
				} 
				else{
					cout<<(char)('A'+strr[i]-49);
                    of.put((char)('A'+ strr[i] - 49));
				}
            }
            else {
//                 cout<<endl<<strr[i]<<" is NOT a number";
            }
        }
        int s1=0,s2=0,s3=0;
            if(flay>2 ){                                //means it's not a 2 digit number but more than it
                of.put('Z');
                cout<<"Z";
            }
            else if(flay == 2){                         // if there are just two numbers after space
                s1 = array[0];
                s2 = array[1];
                s3 = (s1*10+s2);                        //concatenating the two numbers appearing together
                if(s3 >= 1 && s3 <= 26){                //if these adjacent numbers make an alphabet
                    for(int i = 1 ; i<27;i++){
                        if(s3==i){
                            cout<<(char)('A'+s3-1);
                            of.put((char)('A'+s3-1));
                        }
                    }
                }
                else if(s3>26){                         //if these adjacent numbers do not make an alphabet they are Z
                     of.put('Z');
                     cout<<"Z";
                }
            }
            else{                                       //if the number is a single digit
            for(int i=0 ; i<d ; i++){ 
                if(array[i] >=1 && array[i] <= 26){     //if the number in this word is an alphabet
                    cout<<(char)('A'+array[i]-1);
                    of.put((char)('A'+ array[i] - 1));
                }
                else if(array[i]<=0 && array[i] >=27){  //if the numbers in this word are not alphabets then they are Z
                     of.put('Z');
                     cout<<"Z";
                }
            }
        }
        d = 0;
    }
}

int main(){
    take_input();
    code();
}
