#include<iostream>
using namespace std;
class Human{
	public:
		static int human_count;
		int data=0;
		//string name;
		Human()
		{
			human_count++;
		}
		void display()
		{
			cout<<"Humans count"<<" "<<human_count<<" "<<data<<endl;
		}
		static void get()
		{
			cout<<"humans count"<<" "<<human_count<<endl;
		}
};
int Human::human_count=0;

int main()
{
	Human Anju;
	Human Sana;
	Human Papu;
	cout<<Human::human_count<<endl;
	Anju.display();
	Sana.get();
}