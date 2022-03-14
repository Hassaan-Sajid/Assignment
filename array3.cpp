#include <iostream>
using namespace std;
 
int main () 
{
	int a;
	int arr[3][3];
	
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			cout<<"Enter the "<<i+1<<" "<<j+1<<" element: "<<endl;
			cin>>a;
			arr[i][j]=a;
		}
	}
	
	cout<<"the values in array are:"<<endl;
	
	for(int k=0;k<=3;k++)
	{
		for(int l=0;l<=3;l++)
		{
			cout<<arr[k][l]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
