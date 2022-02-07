#include <iostream>
using namespace std;

void exercise1()
{
    int aInt = 10;
	if (aInt <= 9)
	{
		cout << "Number is too low";
	}
	else if (aInt >= 11)
	{
		cout << "Number is too high";
	}
	else
	{
		cout << "Number is perfect";
	}
}

int main()
{
	exercise1();
}
