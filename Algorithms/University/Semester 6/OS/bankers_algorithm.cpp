/**
 * @file        bankers_algorithm.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int resourceCnt = 0;
    cout << "Enter number of resources: ";
    cin >> resourceCnt;

    vector<int> resources;
    cout << "Enter resource values: ";
    for (int i = 0; i < resourceCnt; ++i)
    {
        int x;
        cin >> x;
        resources.push_back(x);
    }

    int processCnt = 0;
    cout << "Enter process count: ";
    cin >> processCnt;

    int processTable[processCnt][resourceCnt * 2]{0};
    vector<int> allocatedResourceSum;

    /// input max need values
    /// row wise input
    cout << "\nInput max values\n";
    for (int i = 0; i < processCnt; ++i)
    {
        for (int j = 0; j < resourceCnt; ++j)
        {
            cin >> processTable[i][j];
        }
    }

    /// input allocated values
    /// column wise input
    cout << "\nEnter allocated resource values\n";
    for (int j = resourceCnt; j < resourceCnt * 2; ++j)
    {
        int sum = 0;
        for (int i = 0; i < processCnt; ++i)
        {
            cin >> processTable[i][j];
            sum += processTable[i][j];
        }

        allocatedResourceSum.push_back(sum);
    }

    for (int i = 0; i < allocatedResourceSum.size(); ++i)
    {
        allocatedResourceSum[i] = resources[i] - allocatedResourceSum[i];
    }

    for (auto i : allocatedResourceSum)
        cout << i << " ";

    /// available resources
    int availableResources[processCnt][resourceCnt]{0};

    /// Calculating available resources

    /// Checking for safe sequence using Banker's Algorithm
    vector<bool> executed(processCnt, false);
    vector<int> safeSequence;
    int count = 0;

    while (count < processCnt)
    {
        bool found = false;

        for (int i = 0; i < processCnt; ++i)
        {
            if (!executed[i])
            {
                bool canExecute = true;

                for (int j = 0; j < resourceCnt; ++j)
                {
                    if (processTable[i][j] > allocatedResourceSum[j])
                    {
                        canExecute = false;
                        break;
                    }
                }

                if (canExecute)
                {
                    safeSequence.push_back(i);
                    executed[i] = true;
                    found = true;
                    count++;

                    for (int j = 0; j < resourceCnt; ++j)
                    {
                        allocatedResourceSum[j] += processTable[i][resourceCnt + j];
                    }

                    break;
                }
            }
        }

        if (!found)
            break;
    }

    if (count == processCnt)
    {
        cout << "\nSafe Sequence: ";
        for (int i : safeSequence)
            cout << "P" << i + 1 << " ";
    }
    else
    {
        cout << "\nNo Safe Sequence!";
    }

    return 0;
}