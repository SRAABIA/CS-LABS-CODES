#include<string>
class Parent{
	public:
		void sleep(){
		}
};
class Child:public Parent{
	private:
		std::string classes[10];
		public:
			void gotoSchool(){
			}
};
int main(){
	Parent *pParent=new Parent;
	Parent *pChild= new Child;
	Child *p1=(Child *)pParent;
	Parent *p2=(Child *) pChild;
	return 0;
//	Child *p= dynamic_cast<Child *>(pParent); used for dynamic casting
}
