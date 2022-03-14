#include <iostream>
using namespace std;

long double factl(int n)
{
	long double factorial= 1.0;
	if (n < 0)
	{
        cout << "Error! Factorial of a negative number doesn't exist.";
	}
	else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
       cout << "Factorial of " << n << " = " << factorial; 
    }
}
int main()
{
	int n;

    cout << "Enter a positive integer: ";
    cin >> n;
	factl(n);
    

    return 0;
}
