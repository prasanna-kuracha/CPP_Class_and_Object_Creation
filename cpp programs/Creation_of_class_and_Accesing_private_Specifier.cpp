/*#include<iostream>
using namespace std;
class Student
{
	public:
		string name,email;
		Student(string n,string ema)
		{
			this->name=n;
			this->email=ema;
		}
		void display()
		{
			cout<<name<<" "<<email;
		}
};
int main()
{
	Student c1("sana","klprasanna@123");
	c1.display();
	Student c2("s","k");
	//c2.display();
	c2.name="pappu";// modifying the attributes in public mode
	c2.display();	
}*/

#include<iostream>
using namespace std;
class College
{
	private:
		string name,email;
	public:
		College(string n,string ema)
		{
			this->name=n;
			this->email=ema;
		}
		void display()
		{
			cout<<name<<" "<<email<<endl;
		}
		void change(string val)
		{
			this->name=val;
		}
};
int main()
{
    College c1("sana","klprasanna@123");
	c1.display();
	//modifying the private variable again we want to write the function
	c1.change("papuu");
	c1.display();
}

