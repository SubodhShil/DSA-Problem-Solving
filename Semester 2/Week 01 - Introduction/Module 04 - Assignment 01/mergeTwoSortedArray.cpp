#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> v1(n1, 0);
    for (int i = 0; i < n1; ++i)
        cin >> v1[i];
    v1.push_back(INT32_MIN);

    cin >> n2;
    vector<int> v2(n2, 0);
    for (int i = 0; i < n2; ++i)
        cin >> v2[i];
    v2.push_back(INT32_MIN);

    vector<int> newArray;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (i == v1.size() - 1 && j == v2.size() - 1)
            break;

        if (v1[i] >= v2[j])
        {
            newArray.push_back(v1[i]);
            ++i;
        }
        else
        {
            newArray.push_back(v2[j]);
            ++j;
        }
    }

    for (auto i : newArray)
        cout << i << " ";

    return 0;
}