#include<iostream>
using namespace std;
int main(){
	int arr[5][9];
	//initializing array using pointer
	for(int i=0; i<5; i++){
		for(int j=0; j<9; j++){
			*(*(arr+i)+j)=0;
		//	cout<<"done"<<i<<endl;
		}
	}
	//using pointer to take user input for first six columns
	for(int row=0;row<5;row++){
		int sum=0;
		for(int col=0;col<9;col++){
			switch(col){
				case 0:
				cout<<endl<<"Enter id: K21-";
                cin >> *(*(arr+row)+col);
                break;
               
               case 1:
                cout<<endl<<"Student"<<row + 1<<" Enter marks for 1. DLD: ";
				cin >> *(*(arr+row)+col);
				sum+= *(*(arr+row)+col);
                break;
			   
			   case 2:
                cout<<endl<<"Student"<<row + 1<<" Enter marks for 2. DE: ";
   				cin >> *(*(arr+row)+col);
				sum+= *(*(arr+row)+col);

                break;
                
                case 3:
                cout<<endl<<"Student"<<row + 1<<" Enter marks for 3. OOP: ";
				cin >> *(*(arr+row)+col);
				sum+= *(*(arr+row)+col);
                break;
                
                 case 4:
                cout<<endl<<"Student"<<row + 1<<" Enter marks for 4. CPS: ";
                cin >> *(*(arr+row)+col);
				sum+= *(*(arr+row)+col);
                break;
                
               case 5:
            	cout<<endl<<"Student"<<row + 1<<" Enter marks for 5. OOP LAB: ";
                cin >> *(*(arr+row)+col);
				sum+= *(*(arr+row)+col);
	             break;
               	
               	case 6:
                *(*(arr+row)+col) = 500;
                break;
                
                case 7:
                //checking sum
               // cout<<"\nSum of student "<<row+1<<" is "<< sum;
                *(*(arr+row)+col)  = sum;
                break;
                
                case 8:

                //cout<<"\nPercentage of student "<<row + 1<<" is "<< ((float)sum / 500 * 100);
                *(*(arr+row)+col) = ((float)sum / 500 * 100);
                //cout<<"\nPercentage of student "<<row + 1<<" is "<<*(*(arr+row)+col) ;

                break;
                
			    default:
              	cout<<endl<<"ERROR :(";

                break;
			}
		}
	}	
	
	cout<<endl<<"_____________________________________________________________________"<<endl;
	cout<<endl<<"|    ID   |    DLD  |    DE  |    OOP  |    CPS  |    OOP-L  |    TOTAL  |    OBT  |    %PER |"<<endl;

	 for (int row = 0; row < 5; row++)
    {
	
	cout<<"|K21-"<<*(*(arr+row)+0)<<" |  "<<*(*(arr+row)+1)<<"  |  "<<*(*(arr+row)+2)<<" |  "<<*(*(arr+row)+3)<<"   |  "<<*(*(arr+row)+4)<<"   |  "<<*(*(arr+row)+5)<<"    |    "<<*(*(arr+row)+6)<<"    |  "<<*(*(arr+row)+7)<<"      |    "<<*(*(arr+row)+8)<<"     |"<<endl;
	}
	
}