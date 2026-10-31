#include<iostream>
using namespace std;
int main()
{
    /*
    Question 02: Write a C++ program that asks the student if they have an overdue
book. If the student does not have an overdue book, print “You can borrow a new
book”, otherwise print “Please return your overdue book first”. Use NOT operator
to do this task.*/
    bool overdue;
    cout << "Enter true if you overdue : ";
    cin >>boolalpha>> overdue;
    if(!overdue){
        cout << "you can borrow new book";
    }else{
        cout << " please return you book you had borrowed firrst";
    }
    return 0;
}