/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil
    * Tag: Testing code snippets

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void safePowerInteger()
{
    cin >> n;
    int power = __lg(n);
    cout << power << endl;
}

void safer_SQRT_int_1()
{
    cin >> n;
    int ans = sqrtl(n);
    while (ans * ans <= n)
        ++ans;
    while (ans * ans > n)
        --ans;

    cout << ans << endl;
}

void safer_SQRT_int_2()
{
    cin >> n;
    long double res = exp(log(n) / 2);
    int floorRes = floor(res);

    if (res * res == n)
        cout << res << endl;
    else
        cout << floorRes << endl;
}

void count_decimal_points()
{
    // https : // java2blog.com/count-decimal-places-cpp/
}

void init_memset()
{
    n = 10;

    /* int arr[n];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl; */

    /* char chArr[n];
    memset(chArr, 'a', sizeof(chArr));
    for (int i = 0; i < n; ++i)
        cout << chArr[i] << endl; */

    bool boolArr[n];
    memset(boolArr, true, sizeof(boolArr));
    for (int i = 0; i < n; ++i)
        cout << boolArr[i] << endl;

    /* char arr[n][n];
    memset(arr, 'R', sizeof(arr));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } */
}

void init_fill()
{
    n = 5;
    int arr[n];
    fill(arr, arr + n, 11);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << endl;
    vector<int> arr2(n);
    fill(arr2.begin(), arr2.begin() + n, 12);
    for (auto i : arr2)
        cout << i << ' ';

    vector<vector<int>> vec2D(n, vector<int>(n));
    for (auto &row : vec2D)
    {
        std::fill(row.begin(), row.end(), 5); // Fill each row with 5
    }

    cout << endl
         << endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << vec2D[i][j] << " ";
        cout << endl;
    }
}

void loop_for_each()
{
    int arr[5] = {1, 5, 2, 4, 3};
    for_each(arr, arr + 5, [](int x)
             { cout << x << ' '; });

    cout << endl;

    vector<int> arr2{10, 20, 30, 100, 234, 99};
    for_each(arr2.begin(), arr2.begin() + arr2.size(), [](int x)
             { cout << x << " "; });
}

void init_iota()
{
    int arr[5];
    iota(arr, arr + 5, 10);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    vector<int> arr2(6);
    iota(arr2.begin(), arr2.begin() + 6, 33);
    for (auto i : arr2)
        cout << i << ' ';
    cout << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        // safePowerInteger();
        // safer_SQRT_int_1();
        // safer_SQRT_int_2();
        // count_decimal_points();
        // init_memset();
        // init_fill();
        // loop_for_each();
        // init_iota();
    }

    return 0;
}