//^ https://www.codingninjas.com/codestudio/problems/beautiful-string_1115625

#include <bits/stdc++.h>
using namespace std;

int makeBeautiful(string str)
{
    int size = str.length(), operation_count = 0;

    //* corner cases
    if (size == 1)
        return operation_count;

    int possibilityOne = 0, possibilityTwo = 0;

    for (int i = 0; i < size; i++)
    {
        if (!(i & 1))
        {
            if (str[i] != '1')
                possibilityOne++;
            if (str[i] != '0')
                possibilityTwo++;
        }
        else
        {
            if (str[i] != '0')
                possibilityOne++;
            if (str[i] != '1')
                possibilityTwo++;
        }
    }

    operation_count = min(possibilityOne, possibilityTwo);

    return operation_count;
}

int main()
{
    string str = "01010010101"; // 0001
    cout << makeBeautiful(str) << endl;

    return 0;
}