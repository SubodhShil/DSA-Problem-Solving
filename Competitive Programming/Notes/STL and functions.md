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

&nbsp;

## **```std::count()```**

Returns the number of occurrences of an element in a given range.

```cpp 
std::count(arr + startIdx, arr + endIdx, element_you_searching)
```

## Little but useful built-in functions

```cpp
cout << sqrt(33) << endl;
cout << cbrt(33) << endl;
cout << pow(2, 3) << endl;

// convert a string with all number digits into a real integer number
string str = "123456";
long long number1 = stoll(str);
cout << number1 << endl;

/// convert any other type to string 
double p = 423.423423;
string number2 = to_string(p);
cout << number2 << endl;

/// check if a character within range 'a - z' or 'A - Z'
cout << (isalpha('3') ? "Alphabet\n" : "Not alphabet\n");
cout << (isdigit('A') ? "Digit\n" : "No a digit\n");

// generate random number
srand(time(0));
int start = 1, end = 1000;
int randomNumber = start + (rand() % end);
cout << "Random number: " << randomNumber << endl;
```

## Convert iterator into 0-based index
Use distance built in library function to do the task
```cpp
vector<int> v{1, 2, 3, 4, 5};
int target = 33;
int n = v.size();
auto it = find(v.begin(), v.end(), target);
int index = distance(v.begin(), it);
/// safety check
if (index <= n - 1)
    cout << index << endl;
else
    cout << "Not available\n";
```
