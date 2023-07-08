/**
 * @file sieve_of_eratothenes.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-03
 * @source: https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        /// assume all elements are prime initially
        vector<bool> sieveArray(N + 1, true);
        vector<int> primeNumbers;

        /// 0 and 1 are not prime
        sieveArray[0] = sieveArray[1] = false;

        for (int i = 2; i <= N; i++)
        {
            if (sieveArray[i] == true)
            {
                primeNumbers.push_back(i);

                // travel and mark as false to it's factors
                for (int j = i * i; j <= N; j += i)
                {
                    sieveArray[j] = false;
                }
            }
        }

        return primeNumbers;
    }
};
