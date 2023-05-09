#include <bits/stdc++.h>
using namespace std;

class SJF
{
public:
    int id, at, st, bt, wt, ct, tt;
};

bool comparefn(SJF a, SJF b)
{
    return a.bt < b.bt;
}

int main()
{

    cout << "\nShortest job first algorithm\n----------********----------\n";

    cout << "Enter SJF count: ";
    int jobCount;
    cin >> jobCount;

    /// creating array of allTasks class
    SJF allTasks[jobCount];
    SJF tempTasks[jobCount];

    /// Entering AT and BT
    cout << "Enter Arrival Time and Burst Time for the process\n";
    for (int i = 0; i < jobCount; ++i)
    {
        cin >> allTasks[i].at >> allTasks[i].bt;

        /// entering the id
        allTasks[i].id = i + 1;
    }

    /// sorting the SJF job 'bt' wise
    sort(allTasks, allTasks + jobCount, comparefn);

    /// SJF algorithm
    /// to create gantt chart

    /// process calculation
    /// prefix sum algorithm
    allTasks[0].st = 0;
    for (int i = 1; i < jobCount; ++i)
    {
        allTasks[i].st = allTasks[i - 1].bt + allTasks[i].bt;
    }

    /// printing the result with st;
    cout << "\n\nShowing AT & BT of the SJF\n---------*******---------\n";
    cout << "\nAT\tBT\tST\n";

    for (int i = 0; i < jobCount; ++i)
    {
        cout << allTasks[i].at << "\t" << allTasks[i].bt << "\t" << allTasks[i].st << endl;
    }

    return 0;
}
