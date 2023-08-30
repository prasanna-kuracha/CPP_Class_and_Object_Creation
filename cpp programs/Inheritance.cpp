//inheritance
/*   the derived class only allows inheritance if the varialbes are in public or protected modes of parent class,
     it doesn't allow private mode to access the values from the parent class */
#include<iostream>
using namespace std;
class Human{
	public:      //parent class
		int age;
		string name;
	public:
		void SetName(string myname){
			name = myname;
		}
		void SetAge(int val){
			age = val;
		}
};
class Student : public Human{    //derived or child class
      //child class only allows public and projected modes in inheritance
      //it changes the mode of the variables and functions from parent class into the represented mode in the derived class 
	public:
		int id;
		void SetId(int val){
			id = val;
		}
		void Display(){
			cout<<name<<" "<<age<<" "<<id<<endl;
		}
		void SetData(string myname, int val){
			name = myname;
			age = val;
		}
};
int main()
{
	Student obj1;
	obj1.id=99;
	obj1.SetData("Anju",18);
	/*obj1.name="Anju";          //the values assigned out side the class if they are in public access mode
	obj1.SetAge(18);*/
	obj1.Display();
	
	
}
