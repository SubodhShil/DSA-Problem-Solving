#include <bits/stdc++.h>
using namespace std;

/// I/O with user input test case number
void testCaseType1()
{
    int t = 0;
    cin >> t;

    int a, b;

    /// iterates until 't' gets to 0
    while (t--)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
}

/// I/O without user input test case number
void testCaseType2()
{
    int a, b;
    // while (scanf("%d, %d", &a, &b), (a || b))
    while ((cin >> a >> b), (a || b))
        cout << a + b << endl;
}

int main()
{
    /// Fast I/O
    ios_base::sync_with_stdio(0), cin.tie(0);

    // testCaseType1();
    testCaseType2();

    return 0;
}