/**
 * @file FCFS.cpp
 * @author Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct FCFS
    {
        int processID;
        float arrivalTime, burstTime;
    };

    int processCnt = 0;
    cout << "Enter process counter: ";
    cin >> processCnt;

    /// declaring process array
    FCFS processArray[processCnt];

    for (int i = 0; i < processCnt; ++i)
    {
        cout << "Enter details for process: " << i + 1 << "\n------------------------------\n";
        float arrivalTimeInput, burstTimeInput;
        processArray[i].processID = i + 1;

        cout << "Enter arrival time: ";
        cin >> arrivalTimeInput;
        processArray[i].arrivalTime = arrivalTimeInput;

        cout << "Enter burst time: ";
        cin >> burstTimeInput;
        processArray[i].burstTime = burstTimeInput;
        cout << endl;
    }

    vector<int> ganttProcess;

    /// hashing
    map<float, float> processHash;

    for (int i = 0; i < processCnt; i++)
    {
        processHash[processArray[i].arrivalTime] = processArray[i].burstTime;
    }

    /// iterating the map
    int cnt = 1;
    for (auto i : processHash)
    {
        if (cnt == 1)
        {
            ganttProcess.push_back(i.first);
            ganttProcess.push_back(i.second);
        }
        else
        {
            ganttProcess.push_back(i.second);
        }

        ++cnt;
    }

    /// prefix sum algorithm to increment after 2nd elements
    /// count has to be started from index 2
    /// 0th and 1st index is pre-computed
    int preComputeValue = ganttProcess[0] + ganttProcess[1];

    for (int i = 2; i < ganttProcess.size(); i++)
    {
        ganttProcess[i] = ganttProcess[i] + preComputeValue;
        preComputeValue = ganttProcess[i];
    }

    /// displaying
    for (auto i : ganttProcess)
        cout << i << " ";

    return 0;
}