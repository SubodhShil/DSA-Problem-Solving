#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hey";

    /// check whether string is empty or not
    if (s1.empty() == 1)
        cout << "String is empty\n";
    else
        cout << "String isn't empty\n";

    /// empty a string
    s1.clear();

    /// check whether string is empty or not using length() function
    if (s1.length() >= 1)
        cout << "String isn't empty\n";
    else
        cout << "String is empty\n";

    /// resizing a string
    string s2 = "Contraption";
    cout << "String is: \""
         << s2 << "\"" << endl;
    cout << "Before resize size is: " << s2.size() << endl;

    s2.resize(6);
    cout << "After resize string is: \"" << s2 << "\"" << endl;
    cout << "New size: " << s2.size() << endl;

    s2.resize(8, ' ');
    cout << s2 << endl;

    return 0;
}