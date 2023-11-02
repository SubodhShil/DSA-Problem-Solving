#include <bits/stdc++.h>
using namespace std;

void prefixSum()
{
    vector<int> v{1, 2, 3, 4, 5};

    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }

    for (auto &i : v)
        cout << i << " ";
}

void prefixSumLib()
{
    vector<int> v{6, 7, 8, 9, 10};
    partial_sum(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

/* https://www.spoj.com/problems/CSUMQ/ */

void ans(vector<int> arr)
{
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        vector<int> v = arr;
        int a, b, ans;
        cin >> a >> b;

        if (b == a)
        {
            cout << v[a] << endl;
            return;
        }

        for (int i = a + 1; i <= b; i++)
        {

            v[i] = v[i - 1] + v[i];
        }
        ans = v[b];
        cout << ans << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    ans(arr);

    return 0;
}