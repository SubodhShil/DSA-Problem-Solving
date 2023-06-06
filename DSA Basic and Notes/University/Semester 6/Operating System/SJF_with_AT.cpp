#include <bits/stdc++.h>
using namespace std;

struct SJF
{
    int processID, arrivalTime, burstTime, turnaroundTime, completionTime, waitingTime;
};

bool compFn(SJF a, SJF b)
{
    if (a.burstTime < b.burstTime)
        return true;
    else if (a.burstTime > b.burstTime)
        return false;
    else
        return a.arrivalTime < b.arrivalTime;
}

int main()
{
    int processCnt = 0;
    cout << "Enter process count: ";
    cin >> processCnt;

    /// declaring process array
    SJF processArray[processCnt];

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
    
    return 0;
}