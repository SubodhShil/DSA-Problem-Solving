/*
                            ॐ JAY JAY SRI RAM ॐ

    * Generate all permutation
    * Author: Subodh Chandra Shil
    * Tag: Premutation

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

void lexico_small_to_bigger_permutation()
{
    int n = 3;
    int arr[3] = {1, 2, 3};
    do
    {
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + n));
}

void lexico_bigger_to_smaller_permutation()
{
    int n = 3;
    int arr[3] = {3, 2, 1};
    do
    {
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (prev_permutation(arr, arr + n));
}

int32_t main()
{
    int t = 1;
    while (t--)
        // lexico_small_to_bigger_permutation();
        lexico_bigger_to_smaller_permutation();

    return 0;
}