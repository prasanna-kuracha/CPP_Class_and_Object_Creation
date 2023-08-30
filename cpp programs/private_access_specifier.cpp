//Private access specifier
/*  we can't access the attributes and methods outside the class when they are in private access mode 
    so we need seters and getters methods in the class in public mode to assign and  access the data  */
#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		void SetData(string word , int val){
			name = word;
			age = val;
		}
		void GetData(){
			cout<<name<<" is a little girl with age "<<age<<endl;
		}
};


int main()
{
	Human obj1;   
	obj1.SetData("Anjali",2);
	obj1.GetData();
	
}