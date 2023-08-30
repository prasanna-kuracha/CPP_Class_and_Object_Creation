/*class
object
constructer
instance var
static var
instance method
static method
define function or construct outside of the class
implement college class*/

/*#include<iostream>
using namespace std;

struct College{
	public:
		string branch,section;
		int bc;
		College(string br,string sec,int bc)//parameterized constructor
		{
			this->branch=br;
			this->section=sec;
			this->bc=bc;
		}
		void display()
		{
			cout<<branch<<" "<<section<<endl;
			cout<<bc;
		}
};
int main()
{
	College s1("CSE","A",0);
	s1.display();
}*/

#include<iostream>
using namespace std;

struct College{
	public:
		static string ins;//static variables
		string branch,section;
		int bc;
		College(string br,string sec,int bc);//parameterized constructor
		void display();
};

//acessing static variables
string College::ins="Aditya";

College::College(string br,string sec,int bc)
{
	this->branch=br;
	this->section=sec;
	this->bc=bc;
}

void College::display()
{
    cout<<branch<<" "<<section<<endl;
    cout<<bc<<endl;
    //display static variables in instance function
    cout<<ins;
}

int main()
{
	College s1("CSE","A",0);
	s1.display();
}


