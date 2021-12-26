#include <iostream>
#include <windows.h>


void darkmode_check()
{

	int darkmode;

	std::cout << "Darkmode? [1/0] \n";
	std::cin >> darkmode;

	if (darkmode == 0) 
		system("color 70");

	else 
		system("color 07");

}

void add(double a, double b) 
{
	std::cout <<"The answer is "<< a + b << std::endl;
}

void subtract(double a, double b)
{
	std::cout << "The answer is " << a - b << std::endl;
}

void multiply(double a, double b)
{
	std::cout << "The answer is " << a * b << std::endl;
}

void divide(double a, double b)
{
	if (b == 0)
	{
		std::cout << "error"<< std::endl;
		return;
	}
	
	std::cout << "The answer is " << a / b << std::endl;
}

int main() 
{

	char x;
	double a;
	double b;

	while (true) {
		darkmode_check();

		std::cout << "Expression: \n";
		std::cin >> a >> x >> b;

		switch (x)
		{
		case ('+'):
			add(a, b);
			break;
		case ('-'):
			subtract(a, b);
			break;
		case ('*'):
			multiply(a, b);
			break;
		case ('/'):
			divide(a, b);
			break;

		}
	}
}