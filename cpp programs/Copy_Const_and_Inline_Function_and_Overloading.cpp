// creation of default,parameterized,copy constructor
/*#include<iostream>
using namespace std;
class Student
{
	public:
		string name,rollno;
		Student() //default constructer
		{
			this->name="sana";
			this->rollno="521";
		}
		Student(string n,string roll)//parameter
		{
			this->name=n;
			this->rollno=roll;
		}
		Student(Student &g)
		{
			this->name=g.name;
			this->rollno=g.rollno;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<endl;
		}
		
		
};
int main()
{
	Student s1,s3;
	Student s2("3guna","435");
	Student s4(s3);// copy constructer calling
	s1.display();
	s2.display();
	s4.display();	
}*/

// inline function and overloading concept
#include<iostream>
using namespace std;
class Student
{
	public:
		string name,rollno;
		Student() //default constructer
		{
			this->name="sana";
			this->rollno="521";
			cout<<"const1"<<endl;
		}
		Student(string n,string roll)//parameter
		{
			this->name=n;
			this->rollno=roll;
			cout<<"const2"<<endl;
		}
		Student (string name)
		{
			this->name=name;
			this->rollno="00";
			cout<<"const4"<<endl;
		}
		Student(Student &g)
		{
			this->name=g.name;
			this->rollno=g.rollno;
			cout<<"const3"<<endl;
		}
		inline void display() //inline function excute faster than normal function
		{
			cout<<name<<" "<<rollno<<endl;
		}	
};
int main()
{
	Student s1,s3;
	Student s2("3guna","435");
	Student s4(s3);// copy constructer calling
	Student s5("Papu");// single parameter
	s1.display();
	s2.display();
	s4.display();
	s5.display();
}