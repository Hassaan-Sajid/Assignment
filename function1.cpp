#include <iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;	
}
int main()
{
	int d,f;
	cout<<"Enter 1st number: ";
	cin>>d;
	
	cout<<"Enter 2nd number: ";
	cin>>f;
			
	cout<<"Sum = "<<sum(d,f);
}
