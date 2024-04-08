/**
 * @file        first_fit.cpp
 * @author      Subodh Chandra Shil
 * @details     first fit algorithm implementation in C++
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

int main()
{
    cout << "Enter the number of processes: ";
    int processCnt = 0;
    cin >> processCnt;

    cout << "Enter the partion size: ";
    int partionCnt = 0;
    cin >> partionCnt;

    vector<partion> partionArray(partionCnt);
    cout << "Enter partion size of each partion: ";
    for (int i = 0; i < partionCnt; ++i)
    {
        cin >> partionArray[i].partionSize;
        partionArray[i].serial = i + 1;
    }

    int i = 1;
    for (; i <= processCnt; ++i)
    {
        cout << "Enter process size for P" << i << ": ";
        int processSize;
        cin >> processSize;

        for (auto &j : partionArray)
        {
            if (!j.isAllocated && j.partionSize >= processSize)
            {
                j.internalFragement = j.partionSize - processSize;
                j.isAllocated = true;
                j.processName.clear();
                j.processName = "P" + to_string(i);
                break;
            }
        }
    }

    cout << endl;
    for (auto i : partionArray)
    {
        cout << "Partion " << i.serial << endl;
        cout << "Allocated by : " << i.processName << endl;
        cout << "Memory wastage: " << i.internalFragement << "MB" << endl;
        cout << "---------------------------------------\n";
    }

    return 0;
}