#include <bits/stdc++.h>
using namespace std;

//& Finding the first occurrence among the sorted array
int firstOccurrenceOfK(vector<int> &arr, int n, int k)
{
    //* return the first occurrence position if matches, otherwise return -1
    int firstOccurrence = -1;

    int firstIndex = 0, lastIndex = n - 1, middleIndex = firstIndex + (lastIndex - firstIndex) / 2;

    //^ basic binary search algorithm
    while (firstIndex <= lastIndex)
    {
        if (arr[middleIndex] == k)
        {
            firstOccurrence = middleIndex;
            firstIndex = middleIndex - 1;
        }

        else if (arr[middleIndex] > k)
            lastIndex = middleIndex - 1;
        else
            firstIndex = middleIndex + 1;

        middleIndex = firstIndex + (lastIndex - firstIndex) / 2;
    }

    return firstOccurrence;
}

//& Finding the first occurrence among the sorted array
int lastOccurrenceOfK(vector<int> &arr, int n, int k)
{
    //* return the first occurrence position if matches, otherwise return -1
    int lastOccurrence = -1;

    int firstIndex = 0, lastIndex = n - 1, middleIndex = firstIndex + (lastIndex - firstIndex) / 2;

    //* tempPosition for preserve first position that match to 'k'
    int tempPosition = 0;

    //^ basic binary search algorithm
    while (firstIndex <= lastIndex)
    {
        if (arr[middleIndex] == k)
        {
            lastOccurrence = middleIndex;
            lastOccurrence = middleIndex + 1;
        }

        else if (arr[middleIndex] > k)
            lastIndex = middleIndex - 1;
        else
            firstIndex = middleIndex + 1;

        middleIndex = firstIndex + (lastIndex - firstIndex) / 2;
    }

    return lastOccurrence;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{

    pair<int, int> result;
    result.first = firstOccurrenceOfK(arr, n, k);
    result.second = lastOccurrenceOfK(arr, n, k);

    return result;
}

int main()
{
    //^ Test
    // vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    vector<int> arr = {0, 0, 0, 0};
    // vector<int> arr = {1, 2};
    // vector<int> arr = {0, 5, 5, 6, 6, 6};

    cout << firstOccurrenceOfK(arr, 4, 0) << endl;
    cout << lastOccurrenceOfK(arr, 4, 0) << endl;

    return 0;
}

/*

0 0 1 1 2 2 2 2
k = 2
binary search

hints: find the first occurrence in first attemp, then approach for last

1. compare to the left side of the first matching position until it is not similar

 */