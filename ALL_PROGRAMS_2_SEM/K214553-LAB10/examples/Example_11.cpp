class Parent{
	public:
		void sleep(){
	
		}
};
class Child: public Parent{
	public:
		void gotoSchool(){
			
		}
};
int main(){
	Parent parent;
	Child child;
	
	Parent *pParent=&child;
	
	Child *pChild=(Child *)&parent;
	
	pParent->sleep();
	pChild->gotoSchool();
		Child *pChild=&parent; 
//this line will cause error because child pointer cannot be converted to parent pointer
	return 0;
}
