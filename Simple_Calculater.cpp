#include<iostream>
#include<cmath>
using namespace std;
double addtion(double x, double y);
double sub(double x, double y);
double manipulate(double x, double y);
double divistion(double x, double y);
void Divistion(double x, double y);
double Factorial(double x);
double absloute(double x);
double power(double x, double y);
double Power(double x, double y);
double largest(double x);
double smallest(double x);
int main()
{
	double x, y;
	int choice;

	do
	{
		cout << "======================|Simple Calculator|======================\n\n";
		cout<<"[1]Add two numbers\n"
			<<"[2]subtract 2 numbers\n"
			<<"[3]the power of a numbers\n" 
			<<"[4]Factorial of a number \n"
			<<"[5]absolute value of a number\n "
			<<"[6]the largest integer\n"
			<<"[7]the smallest integer\n "
			<<"[8]manipulate of two numbers\n"
			<<"[9]divistion of two numbers\n"
			<<"[10]Exit  " << endl;
		cout << endl << "Enter a number : ";
		cin >> choice;


		switch (choice)
		{
		case 1: // ADDS

			cout << "Enter the First number : ";
			cin >> x;
			cout << "Enter The Second Number : ";
			cin >> y;
			cout << x << " + " << y << " = " << addtion(x, y) << endl;


			break;
		case 2: // sub
			cout << "Enter the First number : ";
			cin >> x;
			cout << "Enter The Second Number : ";
			cin >> y;
			cout << x << " - " << y << " = " << sub(x, y) << endl;

			break;
		case 3: //Power of a numbers 
			cout << "Enter the base : ";
			cin >> x;
			cout << "Enter the exponent : ";
			cin >> y;

			cout << x << "^" << y << " = " << Power(x, y) << endl;


			break;
		case 4: //Factorial
			cout << "Enter a Number : ";
			cin >> x;
			cout << x << "!" << " = " << Factorial(x) << endl;


			break;
		case 5: //absloute value 
			cout << " Enter a Number : ";
			cin >> x;
			cout << "|" << x << "|" << " = " << absloute(x) << endl;

			break;
		case 6: // largest 
			cout << " Enter a Number : "; 
			cin >> x;
			cout << char(218) << x << char(191) << " = " << largest(x) << endl; 

			break;
		case 7: // smallest
			cout << " Enter a Number : "; 
			cin >> x;
			cout << char(192) << x << char(217) << " = " << smallest(x) << endl; 


			break;
		case 8: // manipulate 
			cout << "Enter the First number : ";
			cin >> x;
			cout << "Enter The Second Number : ";
			cin >> y;
			cout << x << " * " << y << " = " << manipulate(x, y) << endl;
			break;
		case 9: // divistion 
			cout << "Enter the First number : ";
			cin >> x;
			cout << "Enter The Second Number : ";
			cin >> y;
			cout << x << " / " << y << " = ";
			Divistion(x, y);
			break;
		
			
		}
		if (choice < 10)
		{
			system("pause");
			system("cls");
		}
	} while (choice!=10);
	

	return 0;
}
double addtion(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double manipulate(double x, double y)
{
	return x * y;
}
void Divistion(double x, double y)
{
	if (y == 0)
	{
		cout << "Error , can't divide by zero \n";
	}
	else
		cout << divistion(x, y);
}
double divistion(double x, double y)
{
	return x / y;
}
double Factorial(double x)
{
	double Fact = 1;
	while (x >= 1)
	{
		Fact *= x;
		x--;
	}
	return Fact;
}
double absloute(double x) 
{
	if (x >= 0)
		return x;
	else
		return -1 * x; // or you can use P.D.F(abs)
}
double power(double x, double y)
{
	int P = 1;
	y = abs(y);
	for (int i = 1; i <= y; i++)
	{
		P *= x;
	}
	return P;
}
double Power(double x, double y) // We can use P.D.F (Pow ( x , y )  
{
	if (y < 0)
	{
		return 1 / power(x, y);
	}
	else
	{
		return power(x, y);
	}
}
double largest(double x)
{
	if (x - int(x) > 0)
		return int(x + 1);
	else
		return x;
}
double smallest(double x)
{
	
	return int(x);
}



