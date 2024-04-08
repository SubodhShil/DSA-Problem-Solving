/*
 * link 1: https://www.codingninjas.com/codestudio/problems/swap-alternate_624941
 */

#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i != size - 1)
            swap(arr[i], arr[i + 1]);
    }
}

int main()
{

    return 0;
}