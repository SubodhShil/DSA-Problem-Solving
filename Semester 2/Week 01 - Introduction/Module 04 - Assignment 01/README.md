> ```1. Write a C++ program that takes N integer numbers and sorts them in non-increasing order using Merge Sort. You can’t use any built-in function for sorting.```

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void merge(int left, int right, int mid)
{
    vector<int> leftArray;
    vector<int> rightArray;

    for (int i = left; i <= mid; ++i)
        leftArray.push_back(arr[i]);
    leftArray.push_back(INT32_MIN);

    for (int i = mid + 1; i <= right; ++i)
        rightArray.push_back(arr[i]);
    rightArray.push_back(INT32_MIN);

    /// compare and sort
    int leftP = 0, rightP = 0;
    for (int i = left; i <= right; ++i)
    {
        if (leftArray[leftP] >= rightArray[rightP])
        {
            arr[i] = leftArray[leftP];
            ++leftP;
        }
        else
        {
            arr[i] = rightArray[rightP];
            ++rightP;
        }
    }
}

void mergeSort(int left, int right)
{
    if (left == right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);

    merge(left, right, mid);
}

int main()
{
    int n;
    cin >> n;

    /// taking array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    mergeSort(0, arr.size() - 1);

    /// after merge sort
    for (auto i : arr)
        cout << i << " ";

    return 0;
}
```

> ```2. Write a C++ program that takes N integer numbers that are sorted and distinct. The next line will contain an integer k. You need to tell whether K exists in that array or not. If it exists, print its index otherwise print “Not Found”.```

```cpp
#include <bits/stdc++.h>
using namespace std;

int findElement(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else low = mid + 1;
    }

    return -1;
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> arr;

    /// taking array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cin >> target;

    int index = findElement(arr, target);
    if(index == -1)
        cout << "Not Found\n";
    else cout << index << endl;

    return 0;
}
```


> ```3. You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO. See the sample input-output for more clarification. The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist. You must solve this in O(logn) complexity.```

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isOccurrencePresent(vector<int> arr, int target)
{
    int count = 0;

    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (arr[mid + 1] == target || arr[mid - 1] == target)
            {
                count = 2;
                break;
            }
            else
            {
                count = 1;
                break;
            }
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (count == 1) ? false : true;
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> arr;

    /// taking array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cin >> target;

    bool result = isOccurrencePresent(arr, target);
    if (result)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
```


> ```Q4```
```cpp
Calculate the time complexity of the following code snippets.

(a)
int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
    {
        count += 1;
    }
}
👉 Time Complexity: O(n * log2(n))

(b)
for(int i = 1; i*i<n; i++)
{
     cout << “hello”;
}
👉 Time Complexity: O(√N)

(c)
for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
   {
      cout << “hello”;
   }
}
👉 Time Complexity: O(log2 n * sqrt(n))

(d)
int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}
👉 Time Complexity: O(√N)
```

> ```Q5. You are given two sorted arrays arr1 and arr2 in descending order. Your task is to merge these two arrays into a new array result using the merge sort technique, but Instead of merging the arrays in ascending order, you need to merge them in descending order to create the result array.```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> v1(n1, 0);
    for (int i = 0; i < n1; ++i)
        cin >> v1[i];
    v1.push_back(INT32_MIN);

    cin >> n2;
    vector<int> v2(n2, 0);
    for (int i = 0; i < n2; ++i)
        cin >> v2[i];
    v2.push_back(INT32_MIN);

    vector<int> newArray;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (i == v1.size() - 1 && j == v2.size() - 1)
            break;

        if (v1[i] >= v2[j])
        {
            newArray.push_back(v1[i]);
            ++i;
        }
        else
        {
            newArray.push_back(v2[j]);
            ++j;
        }
    }

    for (auto i : newArray)
        cout << i << " ";

    return 0;
}
```