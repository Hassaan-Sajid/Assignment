#include <iostream>
using namespace std;

struct data
{
	string name;
	int age;
	char gender;
};
int main()
{
	data d1;

	string a;
	int b;
	char c;
	
	cout<<"Enter your name: ";
	getline(cin,a);
	d1.name=a;
	
	cout<<"Enter your age: ";
	cin>>b;
	d1.age=b;
	
	cout<<"Enter your Gender: ";
	cin>>c;
	d1.gender=c;
	
	cout<<"your name is: "<<d1.name<<"\nYour age is: "<<d1.age<<"\nYour gender: "<<d1.gender;	
}
