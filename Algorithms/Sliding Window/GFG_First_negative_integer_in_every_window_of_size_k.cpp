#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    long long i = 0, j = 0;

    queue<long long> tempNegativeValues;
    vector<long long> result;

    while (i < N && j < N)
    {
        /// Always check if new element is negative or not, if -ve then push to the queue
        if (A[j] < 0)
            tempNegativeValues.push(A[j]);

        if (j - i + 1 < K)
        {
            ++j;
            continue;
        }

        /// When it hits the window size
        if (tempNegativeValues.empty())
            result.push_back(0);
        else
        {
            result.push_back(tempNegativeValues.front());
            if (A[i] == tempNegativeValues.front())
                tempNegativeValues.pop();
        }

        ++i, ++j;
    }

    return result;
}

int main()
{

    return 0;
}