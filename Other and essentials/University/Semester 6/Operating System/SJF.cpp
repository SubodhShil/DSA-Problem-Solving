/**
 * @file        SJF.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-17
 * @brief       Program demonstrates SJF scheduling algorithm
 *              arrival time is considered 0 here
 */

#include <bits/stdc++.h>
using namespace std;

struct SJF
{
    int processID;
    float burstTime, turnaroundTime, waitingTime;
};

typedef struct SJF sjf;

bool compareFn(sjf a, sjf b)
{
    return a.burstTime < b.burstTime;
}

bool compareFn2(sjf a, sjf b)
{
    return a.processID < b.processID;
}

int main()
{
    int processCnt = 0;
    cout << "Enter process count: ";
    cin >> processCnt;
    float totalWT = 0;
    float totalTT = 0;

    /// declaring process array
    SJF processArray[processCnt];

    for (int i = 0; i < processCnt; ++i)
    {
        processArray[i].processID = i + 1;
        cout << "Process " << processArray[i].processID << " ------> Burst time = ";
        cin >> processArray[i].burstTime;
    }

    /// ascending sorting the processArray according to the burst time
    sort(processArray, processArray + processCnt, compareFn);

    /// prefix sum to calculating turnaround time
    processArray[0].turnaroundTime = processArray[0].burstTime;
    processArray[0].waitingTime = 0;

    for (int i = 1; i < processCnt; ++i)
    {
        processArray[i].turnaroundTime = processArray[i - 1].turnaroundTime + processArray[i].burstTime;
        processArray[i].waitingTime = processArray[i].turnaroundTime - processArray[i].burstTime;

        totalTT += processArray[i].turnaroundTime;
        totalWT += processArray[i].waitingTime;
    }

    sort(processArray, processArray + processCnt, compareFn2);

    /// Displaying the result
    cout << "\nDisplaying process data\n\n";
    cout << "Process ID\tBurst Time\tTurnaround Time \tWaiting Time\n-----------\t-----------\t-----------------\t-----------------\n";
    for (int i = 0; i < processCnt; ++i)
    {
        cout << processArray[i].processID << "\t\t" << processArray[i].burstTime << "\t\t" << processArray[i].turnaroundTime << "\t\t\t" << processArray[i].waitingTime << endl;
    }

    /// Average WT and TT
    cout << "=================================\n";
    cout << "Average Waiting Time: " << totalTT / processCnt << endl;
    cout << "Average Turn Around Time: " << totalWT / processCnt << endl;

    return 0;
}