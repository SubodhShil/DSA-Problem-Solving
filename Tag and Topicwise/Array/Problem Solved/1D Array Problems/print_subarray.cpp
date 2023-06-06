#include <bits/stdc++.h>
using namespace std;

void printSubarrays(int arr[], int n)
{
    // Iterate over all possible starting points.
    for (int i = 0; i < n; i++)
    {
        // Iterate over all possible ending points.
        for (int j = i; j < n; j++)
        {
            // Print the subarray.
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }

            cout << endl;
        }
    }
}

int main()
{

    return 0;
}