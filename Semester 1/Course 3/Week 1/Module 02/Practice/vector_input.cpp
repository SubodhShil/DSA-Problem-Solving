#include <bits/stdc++.h>
using namespace std;

class vectorInput
{
public:
    void vectorInput1()
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (auto i : v)
            cout << i << ' ';
    }

    void vectorInput2()
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        for (auto i : v)
            cout << i << ' ';
    }
};

int main()
{
    vectorInput v1;
    // v1.vectorInput1();
    v1.vectorInput2();

    return 0;
}