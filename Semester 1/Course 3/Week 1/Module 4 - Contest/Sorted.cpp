#include <bits/stdc++.h>
using namespace std;

class Solutions
{
public:
    void solution1()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int flag = 1;
            int n;
            cin >> n;
            vector<int> arr(n, 0);

            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }

            for (int i = 0; i < n - 1; ++i)
            {
                if (arr[i] > arr[i + 1])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    void solution2()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int flag = 1;
            int n;
            cin >> n;
            vector<int> arr(n, 0);

            /// pruning technique
            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
                if (i > 0 && arr[i] < arr[i - 1])
                {
                    flag = 0;
                    break;
                }
            }

            (flag) ? cout << "YES\n" : cout << "NO\n";
        }
    }
};

int main()
{
    Solutions sol1;
    sol1.solution2();

    return 0;
}