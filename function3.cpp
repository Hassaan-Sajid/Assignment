#include <iostream>
using namespace std;

void greeting(string a)
{
	cout<<"Hello "<<a<<endl;
}
int main()
{
	string s;
	cout<<"Enter your name: ";
	getline (cin, s);
	cout<<endl;
	greeting(s);
}
