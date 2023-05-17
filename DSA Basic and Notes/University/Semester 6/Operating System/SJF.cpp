#include <bits/stdc++.h>
using namespace std;

struct SJF
{
    int processID;
    float arrivalTime, burstTime, turnaroundTime, waitingTime;
};

int main()
{
    int processCnt = 0;
    cout << "Enter process count: ";
    cin >> processCnt;

    /// declaring process array
    SJF processArray[processCnt];

    /// tracking minimum arrival time
    float minArrivalTime = INT32_MAX;
    int minProcessID = -1;

    for (int i = 0; i < processCnt; ++i)
    {
        processArray[i].processID = i + 1;
        cout << "Process " << i + 1 << "--------------------\n";
        cout << "Arrival Time (AT): ";
        cin >> processArray[i].arrivalTime;
        cin >> processArray[i].burstTime;

        /// storing data of minimum arrivalTime
        if (processArray[i].arrivalTime < minArrivalTime)
        {
            minArrivalTime = processArray[i].arrivalTime;
            minProcessID = processArray[i].processID;
        }
    }

    vector<int> ganttChart;

    /// pre calculation

    return 0;
}