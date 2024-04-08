#include <bits/stdc++.h>
using namespace std;

bool isValid(string &str)
{
    int passwordSize = str.size();
    if (passwordSize < 8 || passwordSize > 15)
        return false;

    bool upper = 0, lower = 0, numeric = 0, specialChar = 0;
    for (char i : str)
    {
        if (i == ' ')
            return false;

        if ((i >= 'a' && i <= 'z'))
            lower = true;
        else if ((i >= 'A' && i <= 'Z'))
            upper = true;
        else if ((i >= '0' && i <= '9'))
            numeric = true;
        else
            specialChar = true;
    }

    return (lower && upper && numeric && specialChar) ? true : false;
}

int main()
{

    return 0;
}