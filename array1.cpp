#include <iostream>
using namespace std;
 
int main () 
{
	int a;
	int arr[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter the "<<i+1<<" element: "<<endl;
		cin>>a;
		arr[i]=a;
	}
	
	cout<<"the values in array are: ";
	for(int j=0;j<=9;j++)
	{
		cout<<arr[j]<<endl;
	}
	
}
