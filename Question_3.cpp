#include<iostream>
using namespace std;
int main()
{
    /*
    Question 03: Write a program that asks the user for: Age and whether they have a
CNIC (1 for Yes, 0 for No). A person can vote only if: Age is 18 or above AND They
have a CNIC.
*/
    int age;
    cout << "Enter you Age :";
    cin >> age;
    cout << "Whether you have CNIC : ";
    bool cnic;
    cin >> boolalpha >> cnic;
    if(cnic&&age>=18){
        cout << " you  can vote";

    }
    else{
        cout << " you can't vote";
    }


    

    return 0;
}