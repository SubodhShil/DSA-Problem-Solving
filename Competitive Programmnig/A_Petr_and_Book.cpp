#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totalPages;
    cin >> totalPages;
    int i = 0;

    vector<int> dailyPageStudy(7);
    int pageSum = 0;

    for (int i = 0; i < 7; i++)
        cin >> dailyPageStudy[i];

    while (1)
    {
        pageSum += dailyPageStudy[i];

        if (pageSum >= totalPages)
            break;

        i++;
        i %= 7;
    }
    cout << i + 1 << endl;

    return 0;
}