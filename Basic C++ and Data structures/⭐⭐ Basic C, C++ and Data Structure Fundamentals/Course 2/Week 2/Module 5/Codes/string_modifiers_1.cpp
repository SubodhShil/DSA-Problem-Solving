#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstName = "Subodh ";
    string lastName = "Shil";
    string fullName;
    fullName += firstName + lastName;
    cout << fullName << endl;

    /*
    char str1[] = "Subodh";
    char str2[] = "Shil";
    char str3[] = str1 + str2;
    cout << str3 << endl;
    */

    /// alternative of '+=' operator to append string
    /// using .append() method
    string career;
    career.append(fullName);
    career.append(" is a software engineer");
    cout << career << endl;

    /// adding a character from back
    /// using .push_back() method
    /// .push_back() method only receives a single character
    string message = "Love ";
    // message += 'U';
    message.push_back('U');
    cout << message << endl;
    message.pop_back();
    cout << message << endl;

    return 0;
}