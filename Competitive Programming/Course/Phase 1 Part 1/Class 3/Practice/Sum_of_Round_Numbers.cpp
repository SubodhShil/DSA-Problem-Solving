#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    vector<int> nums;

    for (int i = 0; i < str.size(); ++i)
    {
        int number = str[i] - '0', power = ceil(pow(10, i));
        // cout << "Number: " << number << ' ' << "power: " << power << endl;

        if (number)
            nums.push_back(number * power);
    }

    cout << nums.size() << endl;
    for (auto i : nums)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ans();
    }

    return 0;
}