#include <bits/stdc++.h>
using namespace std;

struct FCFS
{
    int processID, arrivalTime, burstTime, turnaroundTime, completionTime, waitingTime;
};

bool compFn(FCFS a, FCFS b)
{
    if (a.arrivalTime < b.arrivalTime)
        return true;
    else if (a.arrivalTime > b.arrivalTime)
        return false;
    else
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
    FCFS processArray[processCnt];

    cout << "Enter process details\n---------------------------\n";
    for (int i = 0; i < processCnt; ++i)
    {
        cout << "Process " << i + 1 << "\n";
        cout << "Enter AT and BT: ";
        cin >> processArray[i].arrivalTime >> processArray[i].burstTime;

        /// process id allocation
        processArray[i].processID = i + 1;

        /// when arrival time is 0 ct and tt are similar to burst-time and wt is 0
        if (processArray[i].arrivalTime == 0)
        {
            processArray[i].completionTime = processArray[i].burstTime = processArray[i].burstTime;
            processArray[i].waitingTime = 0;
        }
    }

    /// sorting
    sort(processArray, processArray + processCnt, compFn);

    /// calculation the values of process table
    for (int i = 1; i < processCnt; ++i)
    {
        /// edge case
        if (i == 1 && (processArray[1].arrivalTime > processArray[0].completionTime))
        {
            processArray[1].completionTime = processArray[1].arrivalTime + processArray[1].burstTime;
            processArray[1].turnaroundTime = processArray[1].completionTime - processArray[1].arrivalTime;
            processArray[1].waitingTime = processArray[1].turnaroundTime - processArray[1].burstTime;
        }

        /// calculate completion time of the current process
        else
        {
            processArray[i].completionTime = processArray[i - 1].completionTime + processArray[i].burstTime;
            processArray[i].turnaroundTime = processArray[i].completionTime - processArray[i].arrivalTime;
            processArray[i].waitingTime = processArray[i].turnaroundTime - processArray[i].burstTime;
        }
    }

    /// Displaying the result
    cout << "\nDisplaying process data\n\n";
    cout << "Process ID\tArrival time\tBurst Time\tCompletion Time\t\tTurnaround Time\t\tWaiting Time\n";
    for (int i = 0; i < processCnt; ++i)
    {
        cout << "P" << processArray[i].processID << "\t\t" << processArray[i].arrivalTime << "\t\t" << processArray[i].burstTime << "\t\t" << processArray[i].completionTime << "\t\t\t" << processArray[i].turnaroundTime << "\t\t\t" << processArray[i].waitingTime << "\n";
    }

    return 0;
}