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

	//function to turn string into array
	void stringToArray(string input);

	//Polynomial Evaluation function
	void polyeval(int arr[], int evalNum);

	//Congruence Function
	void congruent(int a, int b, int m);
private:


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

//Functioon to turn string into a arr[]
void Lab7::stringToArray(string input)
{
	char arr[20];
	
	for (int i = 0; i <= input.length(); i++)
	{

	}
	
}
//Polynomial Evaluation
//input: arr[] = array of the numbers from equation,
//       evalNum = number to evaluat the equation by
//output: th eresults from the evaluation
void Lab7::polyeval(int arr[], int evalNum)
{

}

//Congruence 
//input: a, b, m
//output: True or False
void Lab7::congruent(int a, int b, int m)
{

}



int main()
{
	// Declared variables


	// application header
	cout << "start of Application " << endl;
	cout << "--------------------" << endl << endl;

	Lab7 l7;
	l7.factorsOfNumber(26);
	l7.factorsOfNumber(64);
	l7.factorsOfNumber(97);
	l7.factorsOfNumber(187);


	// application close
	cout << "------------------" << endl;
	cout << "End of Application" << endl;


}
