/**
 * @file        first_fit_algorithm.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-11
 */

/*
1. No of blocks
2. Each block size
3. No of files or processes
4. Each file size
*/

#include <bits/stdc++.h>
using namespace std;

class Memory
{
public:
    string occupiedProcessName = "Nil";
    int blockMemory = 0;
    int fragementSize = 0;

    Memory(int blockMemory)
    {
        this->blockMemory = blockMemory;
    }
};

int main()
{
    cout << "Enter block count of the memory: ";
    int blockCnt = 0;
    cin >> blockCnt;
    int jobCount = 0;

    /// creating the memory to store the files
    vector<Memory> memory;

    cout << "\nEnter memory size for each memory block\n";
    for (int i = 0; i < blockCnt; ++i)
    {
        cout << "Memory Block " << i + 1 << ": ";
        int size;
        cin >> size;
        memory.push_back(Memory(size));
    }

    cout << "\nEnter the number of jobs: ";
    while (1)
    {
        cin >> jobCount;
        if (jobCount > blockCnt)
            cout << "Too many request\n";
        else
            break;
    }

    cout << "Enter memory request of each job\n-----------------------------------\n";

    int i = 0;
    while (jobCount--)
    {
        cout << "Job " << i + 1 << ": ";
        int memoryRequest;
        cin >> memoryRequest;

        if (memoryRequest < memory[i].blockMemory)
        {
            memory[i].fragementSize = memory[i].blockMemory - memoryRequest;
            memory[i].occupiedProcessName = "J" + to_string(i + 1);
        }

        ++i;
    }

    // display
    cout << "\nShowing the result of memory stage\n------------------------------------\n";
    cout << "Allocated to\tBlock Size\tFragment Size\n------------\t----------\t--------------\n";

    for (int i = 0; i < blockCnt; ++i)
    {
        cout << memory[i].occupiedProcessName << "\t\t" << memory[i].blockMemory << "\t\t" << memory[i].fragementSize << endl;
    }

    return 0;
}