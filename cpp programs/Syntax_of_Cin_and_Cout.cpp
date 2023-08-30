/*#include<iostream>
using namespace std;
int main()
{
	int a,n;
	cin>>n>>a;
	cout<<n<<" "<<a;
	return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
	int a,n,i;
	//cin>>n>>a;
	for(i=0;i<=10;i++)
	{
		cout<<"hai"<<endl; //endl for new line
	}
	return 0;
}
#include<iostream>
using namespace std;
void binary(int n)
{
	int c=0,r;
	while(n>0)
	{
		r=n%10;
		if (r!=0 && r!=1)
		{
			c=1;
			cout<<"not binary";
			break;
		}
		n=n/10;	
	}
	if (c!=1) cout<<"binary";
}

int main()
{
	int n;
	cin>>n;
	binary(n);
}


