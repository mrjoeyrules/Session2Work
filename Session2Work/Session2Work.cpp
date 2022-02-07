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

void exercise2()
{
	float aFloat = 4.9;
	cout << "Starting  value for aFloat is " << aFloat << endl;
	int bInt = 0;
	bInt = aFloat / 2;
	if (bInt == 1)
	{
		cout << "Result is: ";
		cout << aFloat / 2;
	}
}



int main()
{
	//exercise1();
	//exercise2();
}
