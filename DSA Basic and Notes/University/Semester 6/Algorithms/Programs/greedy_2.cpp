#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    float profit;
    int waitingId;
};

bool compFn(Job a, Job b)
{
    return a.profit > b.profit;
}

int main()
{
    cout << "Enter number of jobs: ";
    int jobCnt;
    cin >> jobCnt;

    int maxCustomerCnt = 0;

    Job jobArray[jobCnt];
    cout << "\nEnter profit and waiting time for jobs\n---------------------------------\n";

    for (int i = 0; i < jobCnt; ++i)
    {
        cout << "Job " << i + 1 << endl;
        jobArray[i].id = i + 1;
        cin >> jobArray[i].profit >> jobArray[i].waitingId;
        cout << endl;
    }

    sort(jobArray, jobArray + jobCnt, compFn);

    for (int i = 0; i < jobCnt; ++i)
    {
        cout << "Job " << jobArray[i].id << "| \t" << jobArray[i].id << "\t" << jobArray[i].profit << "\t" << jobArray[i].waitingId << endl;
    }

    /// the barbar's maximum number job == maximum time a customer will wait
    maxCustomerCnt = jobArray[0].waitingId;
    vector<string> result(maxCustomerCnt);

    for (int i = 0; i < jobCnt; ++i)
    {
        result[i] = ;
    }

    return 0;
}