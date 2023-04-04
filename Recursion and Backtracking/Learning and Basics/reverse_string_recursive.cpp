#include <bits/stdc++.h>
using namespace std;

//* reverse string using recursion
string reverseString(string s, int start, int end)
{
    //* base case
    if (start == end)
        return s;
    if (end < 0)
        return "";
    if (start > end)
        return s;

    //* processing
    else
    {
        swap(s[start], s[end]);
        s = reverseString(s, start + 1, end - 1);
    }

    return s;
}

//^ reverse without the second pointer
void reverse(string &s, int size, int start)
{
    //* base case
    if (start == size - start - 1)
    {
        cout << s << endl;
        return;
    }

    if (size - start - 1 < 0)
    {
        cout << "" << endl;
        return;
    }

    if (start > size - start - 1)
    {
        cout << s << endl;
        return;
    }

    //* processing
    swap(s[start], s[size - start - 1]);
    reverse(s, size, ++start);
}

int main()
{
    string s = "Your papa";
    // cout << reverseString(s, 0, s.size() - 1);
    reverse(s, s.size(), 0);

    return 0;
}