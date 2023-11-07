# **```Prefix Sum```**

Snippet for **Prefix Sum**
```cpp
void prefix_sum(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
        arr[i] += arr[i - 1];
}
```

Snippet for **Suffix Sum**
```cpp
void suffix_sum(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 2; i >= 0; --i)
        arr[i] += arr[i + 1];
}
```