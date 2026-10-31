#include<iostream>
using namespace std;
int main()
{
    /*
    Question 05: A shopping website provides free delivery if: The order amount is Rs.
3000 or more OR The customer is a premium member. Ask the user for: Order
amount Premium membership (1 or 0) and decide based on this.*/

    double amount;
    cout << "Order amount : ";
    cin >> amount;
    bool premium;
    cout << " are you premium : ";
    cin >> boolalpha >> premium;
    if(premium&&amount>=3000){
        cout << " you got free delivery offer ";
    }else{
        cout << " you have not free delivery ";
    }

    return 0;
}