#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr(200);

int max_num()
{
    return *max_element(arr.begin(), arr.begin() + n);
}

int min_num()
{
    return *min_element(arr.begin(), arr.begin() + n);
}

bool is_prime_number(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int count_primes()
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (is_prime_number(arr[i]))
            ++cnt;
    }

    return cnt;
}

bool is_palindrome(string strNum)
{
    int n = strNum.size(), i = 0, j = n - 1;
    while (i <= j)
    {
        if (strNum[i] != strNum[j])
            return false;
        ++i, --j;
    }

    return true;
}

int count_palindrome()
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        string str = to_string(arr[i]);
        if (is_palindrome(str))
            ++cnt;
    }

    return cnt;
}

int divisor_cnt(int num)
{
    int cnt = 0;
    for (int i = 1; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                ++cnt;
            else
                cnt += 2;
        }
    }

    return cnt;
}

int max_divisor()
{
    int res = INT32_MIN, last_cnt = INT32_MIN;
    for (int i = 0; i < n; ++i)
    {
        int comp = divisor_cnt(arr[i]);
        if (comp > last_cnt)
        {
            last_cnt = comp;
            res = arr[i];
        }
        else if (comp == last_cnt)
        {
            last_cnt = comp;
            res = max(res, arr[i]);
        }
    }

    return res;
}

void ans()
{
    cout << "The maximum number : " << max_num() << endl;
    cout << "The minimum number : " << min_num() << endl;
    cout << "The number of prime numbers : " << count_primes() << endl;
    cout << "The number of palindrome numbers : " << count_palindrome() << endl;
    cout << "The number that has the maximum number of divisors : " << max_divisor() << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    ans();
    return 0;
}