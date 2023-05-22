/**
 * @file        round_robin.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-19
 * @brief       Program demonstrates round robin scheduling algorithm
 *              arrival time is considered 0 here
 */

#include <bits/stdc++.h>
using namespace std;

struct PROCESS
{
    int processID;
    float burstTime, turnaroundTime, waitingTime;
};

typedef struct PROCESS process;

int main()
{
    queue<int> readyQueue;

    return 0;
}