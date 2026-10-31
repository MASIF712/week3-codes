#include<iostream>
using namespace std;
int main()
{
    /*
    Question 04: Ask the user to input a number. Using if else condition, check if the
number is EVEN or ODD.*/

    int number;
    cout << "Enter a number :";
    cin >> number;
    if(number%2==0){
        cout << "Even";

    }else{
        cout << "Ood";
    }

    return 0;
}