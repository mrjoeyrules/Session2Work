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

void exercise3()
{
	int a = 2;
	int b = 4;
	int c = 6;
	int d = 8;
	if (a == 2 && b < 3)
	{
		cout << "Test A";
	}
	else if (a != 3 && b > 2)
	{
		cout << "Test B";
	}
	else if (c < 7 || d > 9)
	{
		cout << "Test C";
	}
	else if (c >= 6 || d <= 10)
	{
		cout << "Test D";
	}
	else if (a == 2 && d > 7)
	{
		cout << "Test E";
	}
	else
	{
		cout << "None are met";
	}
}

void exercise4()
{
	double BMI;
	double height;
	double weight;
	cout << "Enter your height in meters" << endl;
	cin >> height;
	cout << "ENter your weight in kilograms" << endl;
	cin >> weight;
	BMI = weight / pow(height, 2);
	cout << BMI;
	if (BMI < 18.5)
	{
		cout << "BMI is underweight";
	}
	else if (BMI == 18.5 && BMI < 24.9)
	{
		cout << "BMI is normal";
	}
	else if (BMI > 24.9)
	{
		cout << "BMI is overweight";
	}
}

void exercise5()
{
	int count = 1;
	int randomNumber = rand() % 20 + 1;
	int userNumber;
	bool loopControl = true;
	while (loopControl)
	{
		cout << "Enter a number between 1 and 20";
		cin >> userNumber;
		if (userNumber > 20 || userNumber < 1)
		{
			cout << "Enter a number between 1 and 20";
		}
		else
		{
			loopControl = false;
		}
		for (size_t i = 1; i < 21; i++)
		{
			if (randomNumber == i)
			{
				cout << count << "yes" << "....." << endl;
			}
			else if (userNumber == i)
			{
				cout << count << "....." << "yes" << endl;
			}
			else
			{
				cout << count << "........" << endl;
			}
			count++;
		}
	}

	
}

int main()
{
	//exercise1();
	//exercise2();
	//exercise3();
	//exercise4();
	exercise5();
}
