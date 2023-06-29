#include <bits/stdc++.h>
using namespace std;

class Practice1
{
public:
    void print(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                for (int k = 1; k <= n; ++k)
                {
                    cout << k << " ";
                }

                cout << endl;
            }
        }
    }

    void recursionPrint(int s, int e)
    {
        if (s < e)
        {
            cout << s << " ";
            recursionPrint(s, ++e);
            recursionPrint(s, ++e);
        }
    }
};

int main()
{
    Practice1 sol1;
    // sol1.print(3);
    sol1.recursionPrint(1, 3);

    return 0;
}