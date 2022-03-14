#include <iostream>
using namespace std;
 
int main () 
{
	int a;
	int arr[1][1][1];
	
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			for(int k=0;k<=1;j++)
			{
				cout<<"Enter the "<<i+1<<" "<<j+1<<" "<<k+1<<" element: "<<endl;
				cin>>a;
				arr[i][j][k]=a;
			}
		}
	}
	
	cout<<"the values in array are:"<<endl;
	
	for(int a=0;a<=1;a++)
	{
		for(int b=0;b<=1;b++)
		{
			for(int c=0;c<=1;c++)
			{
				cout<<arr[a][b][c]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
