/*
 * link 1: https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
 */

#include <bits/stdc++.h>
using namespace std;

//* Bruteforce

/*

^ Testcase:
A: [1 2 3 3 4 5 6]
B: [3 3 5]

 */

void intersect(vector<int> &A, vector<int> &B)
{
    vector<int> v;

    /// @algorithm: two pointer

    /// Taking two pointers
    int i = 0, j = 0;
    int A_arr_size = A.size();
    int B_arr_size = B.size();

    while (i < A_arr_size && j < B_arr_size)
    {
        if (A[i] == B[j])
        {
            v.push_back(A[i]);
            ++i, ++j;
        }
        else if (A[i] > B[j])
            ++j;
        else
        {
            ++i;
        }
    }

    return v;

    // for (int k : v)
    //     cout << k << " ";
}

int main()
{
    vector<int> A = {1, 2, 3, 3, 4, 5, 6};
    vector<int> B = {3, 3, 5};

    intersect(A, B);

    return 0;
}