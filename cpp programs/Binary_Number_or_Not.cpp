#include<iostream>
using namespace std;
void binary(int n)
{
	int r,c,dco;
	c = 0;
	dco = 0;
	while(n>0)
	{
		r = n % 10;
		n = n/10;
		dco++;
		if (r==0 || r==1) c++;
		else
		{
			break;
		}
	}
	if (c==dco) 
	{
		cout<<"Binary Number";
	}
	else
	{
		cout<<"Not a Binary Number";
	}
}
int main()
{
	int n;
	cin>>n;
	binary(n);
}
