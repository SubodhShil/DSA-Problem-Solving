#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(char *arr, int start, int end, int n)
{
    /// if start or end meet or successfully cross
    /// then it's palindrome
    if (start >= end)
        return true;

    if (arr[start] == arr[end])
        return is_palindrome(arr, start + 1, end - 1, n);

    return false;
}

int main()
{
    char str[1000 + 20];
    scanf("%s", &str);

    int n = strlen(str);
    bool result = is_palindrome(str, 0, n - 1, n);

    if (result)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}