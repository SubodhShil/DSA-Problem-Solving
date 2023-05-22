/**
 * @file        priority_scheduling.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-19
 * @brief       Program demonstrates priority scheduling algorithm
 *              where arrival time is considered 0
 */

#include <bits/stdc++.h>
using namespace std;

struct PROCESS
{
    int processID, prioritySerial;
    float burstTime, turnaroundTime, waitingTime;
};

typedef struct PROCESS process;

bool compFn(process a, process b)
{
    return a.prioritySerial < b.prioritySerial;
}

bool compareFn2(process a, process b)
{
    return a.processID < b.processID;
}

/// Less value highest priority
int main()
{
    cout << "Enter process count: ";
    int processCnt = 0;
    cin >> processCnt;

    float totalWT = 0;
    float totalTT = 0;

    /// declaring the process array
    PROCESS processArray[processCnt];

    cout << endl;
    for (int i = 0; i < processCnt; ++i)
    {
        processArray[i].processID = i + 1;
        cout << "Process " << processArray[i].processID << "\n-------\nBurst time = ";
        cin >> processArray[i].burstTime;
        cout << "Priority = ";
        cin >> processArray[i].prioritySerial;

        cout << endl;
    }

    /// ascending sorting the processArray according to the priority priority serial number
    sort(processArray, processArray + processCnt, compFn);

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
    cout << "Process ID\tBurst Time\tPriority\tTurnaround Time \tWaiting Time\n-----------\t-----------\t-----------\t-----------------\t-----------------\n";
    for (int i = 0; i < processCnt; ++i)
    {
        cout << processArray[i].processID << "\t\t" << processArray[i].burstTime << "\t\t" << processArray[i].prioritySerial << "\t\t" << processArray[i].turnaroundTime << "\t\t\t" << processArray[i].waitingTime << endl;
    }

    /// Average WT and TT
    cout << "=================================\n";
    cout << "Average Waiting Time: " << totalTT / processCnt << endl;
    cout << "Average Turn Around Time: " << totalWT / processCnt << endl;

    return 0;
}