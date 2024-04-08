#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /// sum of digits from 10 to n
    for (int i = 10; i <= n; ++i)
    {
        int number = i;
        int sum = 0;
        while (number > 0)
        {
            int digit = number % 10;
            sum += digit;
            number /= 10;
        }
        cout << "Sum of digit of " << i << " is: " << sum << endl;
    }

    return 0;
}