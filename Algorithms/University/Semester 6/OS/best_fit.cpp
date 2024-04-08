/**
 * @file        best_fit.cpp
 * @author      Subodh Chandra Shil
 * @details     best fit algorithm implementation in C++
 */

#include <bits/stdc++.h>
using namespace std;

class partion
{
public:
    int serial;
    int partionSize;
    int internalFragement;
    bool isAllocated;
    string processName;

    partion()
    {
        serial = 0;
        internalFragement = 0;
        isAllocated = false;
        processName = "null";
    }
};

/// choose the process which has less memory waste or internal fragmentation
int main()
{
    cout << "Enter the number of processes: ";
    int processCnt = 0;
    cin >> processCnt;

    cout << "Enter the partition size: ";
    int partitionCnt = 0;
    cin >> partitionCnt;

    vector<partion> partitionArray(partitionCnt);
    cout << "Enter partition size of each partition: ";
    for (int i = 0; i < partitionCnt; ++i)
    {
        cin >> partitionArray[i].partionSize;
        partitionArray[i].serial = i + 1;
    }

    for (int i = 1; i <= processCnt; ++i)
    {
        cout << "Enter process size for P" << i << ": ";
        int processSize;
        cin >> processSize;
        int lowestInternalFragement = INT32_MAX;
        int lowestIdx = -1;

        for (int j = 0; j < partitionCnt; ++j)
        {
            if (!partitionArray[j].isAllocated && partitionArray[j].partionSize >= processSize && partitionArray[j].partionSize - processSize < lowestInternalFragement)
            {
                lowestInternalFragement = partitionArray[j].partionSize - processSize;
                lowestIdx = j;
            }
        }

        if (lowestIdx >= 0)
        {
            partitionArray[lowestIdx].internalFragement = lowestInternalFragement;
            partitionArray[lowestIdx].isAllocated = true;
            partitionArray[lowestIdx].processName.clear();
            partitionArray[lowestIdx].processName = "P" + to_string(i);
        }
    }

    cout << endl;
    for (auto &i : partitionArray)
    {
        cout << "Partition " << i.serial << endl;
        cout << "Allocated by: " << i.processName << endl;
        cout << "Memory wastage: " << i.internalFragement << "MB" << endl;
        cout << "---------------------------------------\n";
    }

    return 0;
}
