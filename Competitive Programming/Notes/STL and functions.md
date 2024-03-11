## ```std::unique```
Removes consecutive duplicate elements from a range of elements.
- it does not change the size of the container
- returns a pointer pointing to the new end of the container

```cpp
    std::vector<int> vec = {10,20,20,20,30,30,20,20,10}; // 10 20 20 20 30 30 20 20 10

    /// Use std::unique to remove consecutive duplicate elements
    auto last = std::unique(vec.begin(), vec.end()); // 10 20 30 20 10 ?  ?  ?  ?

    /// Resize the vector to remove the extra elements
    // vec.erase(last, vec.end());
    /// or
    vec.resize(std::distance(vec.begin(), last)); // 10 20 30 20 10
```

&nbsp;

## **```How to get index of maximum and minimum element in an array```** 

Using vector container: 
```cpp
int maxElementIdx = max_element(a.begin(), a.end()) - a.begin();
int minElementIdx = min_element(a.begin(), a.end()) - a.begin();
```

&nbsp;

## **```Find first and last index of an element```**

```cpp
int x; cin >> x;
vector<int> v = {1, 2, 3, 4, 4, 4, 5, 6};

int first_idx = n - distance(find(begin(v), end(v), x), end(v));
int last_idx = distance(find(rbegin(v), rend(v), x), rend(v)) - 1;
```

## **```Covert decimal into bit```**
```cpp
    string strNum = bitset<32>(5).to_string();
    int num = stoi(num);
    cout << strNum << '\t' << num << endl;
```

