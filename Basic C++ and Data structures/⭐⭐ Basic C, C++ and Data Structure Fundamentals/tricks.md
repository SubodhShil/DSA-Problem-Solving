> # **```Tricks```**

- The following line in taking unlimited input of 'n' and 'm' variable along with a condition separated by comma(,)

## <p align="center">**Taking user input with conditions**</p>

## <p align="center">**(1)**</p>

```cpp
int n, m;
while (cin >> n >> m, n > 0 && m > 0)
{
    /// statements here
}
```

## <p align="center">**(2)**</p>

```cpp
list<string> url;

string s;
while ((cin >> s), s != "end")
{
    url.push_back(s);
}

for (auto i : url)
    cout << i << " ";
```

&nbsp;

```cpp
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
```

```cpp
const int N = 105;
int t,n,cnt;
char s[N];
scanf("%d",&n);
scanf("%s",s+1);
```