#include <bits/stdc++.h>
using namespace std;

/// taking string input with spaces
class Solution1
{
public:
    void inputWithSpaces()
    {
        int number;
        char ch;
        cin >> number >> ch;
        cin.ignore();

        string s;
        getline(cin, s);

        cout << number << " " << ch << endl;
        cout << s << endl;
    }
};

class Solution2
{
public:
    void inputWithSpaces()
    {
        string s;
        int number;
        cin >> number;

        /// peek() function returns the next character that will be read from the input stream. In this case, we are checking to see if the next character is a newline character. If it is, then we call the ignore() function to discard the newline character.
        if (cin.peek() == '\n')
        {
            cin.ignore();
        }

        getline(cin, s);
        cout << number << endl;
        cout << s << endl;
    }
};

int main()
{
    // Solution1 sol1;
    // sol1.inputWithSpaces();

    Solution2 sol2;
    sol2.inputWithSpaces();

    return 0;
}
