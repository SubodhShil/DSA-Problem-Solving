# **```String```**

## ```How to input multiline strings```

<details>
<summary>Snippet</summary>

```cpp
string str;
int n;
cin >> n;

cin.ignore(); // ignore the first '\n' after test case 'n' input
for(int i = 1; i <= n; ++i)
{
    getline(cin, str);
    cout << str << endl;
}
```
</details>