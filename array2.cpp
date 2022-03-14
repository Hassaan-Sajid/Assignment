#include <iostream>
using namespace std;
 
int main () 
{
	int a,sum = 0;
	int arr[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter the "<<i+1<<" element: "<<endl;
		cin>>a;
		arr[i]=a;
	}
	
	cout<<"The sum of array is: ";
	for(int j=0;j<=9;j++)
	{
		sum = sum + arr[j];
	}
		cout<<sum;
}
