#include<iostream>
using namespace std;
int rowww=0,columns=0;
class MatrixType{
	int *(*matrix);
	int R, C;
	public:
		MatrixType(){
			R = rowww;
			C = columns;
			matrix = new int*[R];
			for(int o=0; o<rowww ; o++){
				matrix[o] = new int [C];
			}
		}
		MatrixType(int rows,int col){
			R = rows;
			C = col;
			matrix = new int*[rows];
			for(int o=0; o<rows ; o++){
				matrix[o] = new int [col];
			}
		}
		bool operator==(const MatrixType&obj1){
				if((R==obj1.R) && (C==obj1.C)){
					return true;
				}
				else 
				return false;
		}	
		MatrixType operator+(const MatrixType&obj1 ){
				MatrixType temp(R,C);
				
				for(int i=0;i<R;i++){
					for(int j=0;j<C;j++){
						 *(*(temp.matrix+i)+j) = *(*(matrix+i)+j) + *(*(obj1.matrix+i)+j);
					}
				}
				return temp;
		}	
		MatrixType operator-(const MatrixType&obj1 ){
				MatrixType temp;
				
				for(int i=0;i<R;i++){
					for(int j=0;j<C;j++){
						 *(*(temp.matrix+i)+j) = *(*(matrix+i)+j) - *(*(obj1.matrix+i)+j);
					}
				}
				return temp;
		}	
		MatrixType operator*(const MatrixType&obj){
				MatrixType temp(R,obj.C);
				
				for(int i=0;i<R;i++)
				{
					for(int j=0;j<obj.C;j++)
					{
							temp.matrix[i][j]=0;
						for(int k=0;k<C;k++)
						{
							temp.matrix[i][j]+=matrix[i][k]*obj.matrix[k][j];
						}
					}
				}
				return temp;
		}	
		friend ostream& operator <<(ostream &os,const MatrixType&obj );
		friend istream& operator >>(istream&os,const MatrixType&obj);
		
		~MatrixType(){
			for(int i = 0; i< R ; ++i){
				delete [] matrix[i];
			}
			delete [] matrix;
		}
};
ostream& operator <<(ostream &os,const MatrixType&obj )
{
        for(int i=0;i<obj.R;i++){
            for(int j=0;j<obj.C;j++){
                os<<"\t  "<<*(*(obj.matrix+i)+j)<<"  ";
                }
            os<<"\n";
        }
	return os;
}
istream& operator >>(istream&os,const MatrixType&obj){
        for(int i=0;i<obj.R;i++){
            for(int j=0;j<obj.C;j++){
            cout<<"\nEnter value for matrix["<<i<<"]["<<j<<"]: ";
            os>>*(*(obj.matrix+i)+j);
            }
            cout<<"\n";
        }
			return os;	
}
int main(){
	int n,m,k,s;
	cout<<"\tMATRIX #1";
	cout<<"\nEnter the size of array : \n   ROWS: "; cin>>n;
	cout<<"\nCOLUMNS: "; cin>>m;
	MatrixType Array1(n,m);
	cin>>Array1;
	cout<<"\n\tMATRIX 1: \n\n"<<Array1;
	cout<<"\n\tMATRIX #2";
	cout<<"\nEnter the size of array : \n   ROWS: "; cin>>k;
	cout<<"\nCOLUMNS: "; cin>>s;
	MatrixType Array2(k,s);
	cin>>Array2;
	cout<<"\n\tMATRIX 2: \n\n"<<Array2; cout<<endl<<"-------------------------------------------------------\n";
	if(Array2 == Array1 ){
		rowww=n,columns=m;
        cout<<"\nPerforming Addition:\n\n";
        MatrixType sum(Array2+Array1); //sum on same line as declaration
		cout<<sum;
		cout<<"\nPerforming Subtraction:\n\n";	
		MatrixType difference(Array2-Array1); // same line as declaration
		cout<<difference;
	}
	else cout<<"\n\n\t==Not Equal Matrices\n\tAddition/Subtraction Not Possible";
	cout<<endl<<"-------------------------------------------------------\n";
	if(m==k){
        rowww=n,columns=s;
		MatrixType product = Array1*Array2;
        cout<<"\nMultiplication of Matrices: \n\n";
		cout<<product;
	}
	else cout<<"\n\n\t==Not Equal Matrices\n\tMultiplication Not Possible";
	 cout<<endl<<"-------------------------END------------------------------\n";
}