#include <bits/stdc++.h>
using namespace std;

struct FCFS
{
    int processID;
    float burstTime, turnaroundTime, waitingTime;
};

int main()
{
    int processCnt = 0;
    cout << "Enter process count: ";
    cin >> processCnt;
    float totalWT = 0;
    float totalTT = 0;

    /// declaring process array
    FCFS processArray[processCnt];

    for (int i = 0; i < processCnt; ++i)
    {
        processArray[i].processID = i + 1;

        cout << "Process " << processArray[i].processID << " ------> Burst time = ";
        cin >> processArray[i].burstTime;

        /// calculating the TT and WT
        if (i == 0)
        {
            processArray[i].turnaroundTime = processArray[i].burstTime;
            processArray[i].waitingTime = 0;
        }
        else
        {
            processArray[i].turnaroundTime = processArray[i - 1].turnaroundTime + processArray[i].burstTime;
            processArray[i].waitingTime = processArray[i].turnaroundTime - processArray[i].burstTime;
        }

        totalTT += processArray[i].turnaroundTime;
        totalWT += processArray[i].waitingTime;
    }

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