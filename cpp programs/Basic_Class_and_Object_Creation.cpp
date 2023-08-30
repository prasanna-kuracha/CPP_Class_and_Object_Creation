#include<iostream>
using namespace std;

struct Student{
	public: //it allo
	   string name="sana",rollno,branch,college;
	   int bc=100;
	   float per=99.54;
};

int main()
{
	Student s1,s2;
	cout<<s1.bc<<endl;
	cout<<s2.per<<endl;
	cout<<s2.bc<<endl;
	cout<<s1.name<<endl;
	return 0;
}
