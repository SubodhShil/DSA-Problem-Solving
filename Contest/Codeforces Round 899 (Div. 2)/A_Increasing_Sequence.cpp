#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), arr2(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];

            if (i == 0)
            {
                if (arr[0] == 1)
                    arr2[0] = 2;
                else
                    arr2[0] = 1;
            }
            else
            {
                if (arr2[i - 1] + 1 == arr[i])
                    arr2[i] = arr[i] + 1;
                else
                    arr2[i] = arr2[i - 1] + 1;
            }
        }

        cout << arr2[n - 1] << endl;
    }

    return 0;
}