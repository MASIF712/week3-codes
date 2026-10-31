#include <iostream>
using namespace std;
int main()
{
    /*
    Question 06: Write a C++ program that asks the user to enter two numbers and an
arithmetic operator (+, -, *, or /). The program should perform the corresponding
operation based on the operator entered by the user. For example, if user inputs
“+”, do addition between the numbers. If user enters any operator other than the
4 mentioned, print ”Invalid Operator”.*/
    int number1, number2;
    char operators;
    cout << "Enter first number :";
    cin >> number1;
    cout << "Enter second number :";
    cin >> number2;
    cout << "Which Operation would you want to perform (+,-,*,/) : ";
    cin >> operators;
    if (operators == '+')
    {
        cout << " the sum of " << number1 << " and " << number2 << " is equal to : " << number1 + number2 << endl;
    }
    else if (operators == '-')
    {
        cout << " the subtraction " << number1 - number2 << endl;
    }
    else if (operators == '*')
    {
        cout << " the multiplicatin is " << number1 * number2 << endl;
    }
    else if(operators == '/')
        {
            cout << " the division " << number1 / number2 << endl;
        }

    return 0;
}