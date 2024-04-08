#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, m;
    cin >> n >> m;
    int person = 1;
    deque<int> dq;
    int arr[n + 5]{0};

    while (m--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            arr[person] = 1;
            dq.push_back(person);
            ++person;
        }
        else if (x == 2)
        {
            int y;
            cin >> y;
            arr[y] = 0;
        }
        else if (x == 3)
        {
            int ele = dq.front();
            while (!arr[ele])
            {
                dq.pop_front();
                ele = dq.front();
            }
            cout << ele << endl;
        }
    }
}

int main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}