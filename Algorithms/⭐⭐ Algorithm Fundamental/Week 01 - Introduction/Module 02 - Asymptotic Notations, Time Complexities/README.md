> Time complexity

```cpp
/// Time complexity: O(N)
/// The loop will be run for n / 2 times
for(int i = 0; i < n; i += 2)
{
    // ... ...
}
```
&nbsp;

```cpp
/// Time complexity: O(N^2)
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < n; ++j)
    {
        // ... ...
    }
}
```
&nbsp;

```cpp
/// Time complexity: O(√N)
int p = 0;
for(int i = 0; p <= n; i++)
{
    p += i;
}
```
&nbsp;

```cpp
/// Time complexity: O(log2(N))
for(int i = 0; i < n; i *= 2)
{
    // ... ...
}
```

&nbsp;

```cpp
/// Time Complexity: O(√N)
for(int i = 1; i*i<n; i++)
{
     cout << “hello”;
}
```


```cpp
/// Time Complexity: O(log2(N))
for (int i = n; i > 0; i /= 2) 
{
    /// ... ...
}
```
&nbsp;

```cpp
int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
    {
        count += 1;
    }
}
```