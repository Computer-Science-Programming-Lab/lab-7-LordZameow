//==========================================================
//
// Title:      Fundamental Structures Lab 7
// Course:     CSC 1501
// Lab Number: Lab 7
// Author:     Timothy Armstrong
// Date:       3/2/2020
// Description:
//   this program will
// - Factors of a Number
// - Polynomial Evaluation 
// - Congruence
// 
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath>
#include <math.h>
#include <string.h>
using namespace std; // So "std::cout" may be abbreviated to "cout"

//class declaration for lab7
class Lab7
{
public:
	//Factors of a Number function
	void factorsOfNumber(int num);


	//Polynomial Evaluation function
	void polyeval(int arr[], int arraySize, int evalNum);

	//Congruence Function
	void congruent(int a, int b, int m);
private:
	char arr[20];

};


//Factors of a Number 
//input: num = number to be factored
//output: array that has the factors stored
//testcases: 26,64,97,187
void Lab7::factorsOfNumber(int num)
{
	int arr[20];
	int j = 2;
	//floor variable
	int n = 0;

	//determine floor value
	n = floor(sqrt(num));

	//declare the first two values in the array
	arr[0] = 1;
	arr[1] = num;

	//find the rest of the array values
	for (int i = 2; i <= n; i ++)
	{
		if (num % j == 0)
		{
			arr[i] = j;
			arr[i + 1] = (num / j);
			i++;
		}
		else if (num % n == 0)
		{
			arr[n] = n;
		}
		j++;
	}

	cout << "[";
	//output the array
	for (int k = 0; k <= n; k++)
	{
		if (arr[k] > 0 && arr[k] <= num)
		{
			cout << arr[k] << ",";
		}
	}
	cout << "]" << endl;
}


//Polynomial Evaluation
//input: arr[] = array of the numbers from equation,
//       arraySize = for how many inputs
//       evalNum = number to evaluat the equation by
//output: the results from the evaluation
//TestCase: Arr[-4,0,13,6] , evalNum = 3 , −4∗3^0 + 0∗3^1 + 13∗3^2 + 6∗3^3= 275
void Lab7::polyeval(int arr[], int arraySize, int evalNum)
{

	int sum = 0;
	for (int i = 0; i < arraySize; i++)
	{

			sum += arr[i] * pow(evalNum, i);

	}
	cout << "The sum of the evaluation is: " << sum << endl;
}

//Congruence 
//input: a, b, m
//output: True or False
//TestCase: a=b(% m) = True
void Lab7::congruent(int a, int b, int m)
{
	if ((b % m) == (a % m))
	{
		cout << "a = " << a << ", b = " << b << ", m = " << m << endl;
		cout << "True" << endl;
	}
	else
	{
		cout << "a = " << a << ", b = " << b << ", m = " << m << endl;
		cout << "False" << endl;
	}
}



int main()
{
	// Declared variables
	//array for the poleval equation
	int arr[4] = { -4, 0, 13, 6 };
	int evalNum = 3;
	int arraySize = (sizeof(arr)/4);
	// application header
	cout << "start of Application " << endl;
	cout << "--------------------" << endl << endl;

	Lab7 l7;
	l7.factorsOfNumber(26);
	l7.factorsOfNumber(64);
	l7.factorsOfNumber(97);
	l7.factorsOfNumber(187);
	l7.polyeval(arr,arraySize, evalNum);
	l7.congruent(0, 8, 2);
	l7.congruent(2, 8, 2);



	// application close
	cout << "------------------" << endl;
	cout << "End of Application" << endl;


}
