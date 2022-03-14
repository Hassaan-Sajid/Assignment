#include <iostream>    
using namespace std;
struct Person
{
	string citizenship;
	int age;
};
int main(void) {
	struct Person p;
	p.citizenship = "pakistani";
	p.age = 27;
	cout << "Person citizenship: " << p.citizenship << endl;
	cout << "Person age: " << p.age << endl;

	return 0;
}
