#include<iostream>
using namespace std;
int main()
{
    /*
    Question 07: Create a simple Student Portal. Ask the user if they are a registered
student. If not, then print “Access Denied, you are not registered”. If they are
registered student, check whether they have a valid student card. If they don’t,
print “Access Denied, please obtain a valid CNIC card”. If both above requirements
are fulfilled, ask for their marks. If marks are:
• 80 or above. Display Grade: A
• 60–79. Display Grade: B
• 50–59. Display Grade: C
• Below 50. Display Fail
*/
    cout << " Student Portal "<<endl;
    cout << "Whether you are registered Student : ";
    bool isRegistered,Student_Card;
    cin >> boolalpha >> isRegistered;
    if(isRegistered){
        cout << "Wheather you have a Student Card :";
        cin >> Student_Card;
        if(Student_Card){
            double marks;
            cout << "Enter Marks : ";
            cin >> marks;
            if(marks>=80){
                cout << "Grade : A";
            }else if(marks>=60&&marks<=79){
                cout << "Grade : B";
            }else if(marks>=50&&marks<=69){
                cout << "Grade : C";
            }else if(marks<=50&&marks>=0){
                cout << "you are fail";
            }
        
        }else{
            cout << "Access Denied, please obtain a valid CNIC card";
        }
    }else{
            cout << "Access Denied, you are not registered";
    }

    return 0;
}