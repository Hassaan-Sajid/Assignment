#include <iostream>
using namespace std;

void maax(int a,int b)
{
	if(a>b)
	{
		cout<<a<<" is greater than "<<b;
	}
	else
	{
		cout<<b<<" is greater than"<<a;
	}
}
int main()
{
	int a,b;
	
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<endl;
	maax(a,b);
}
