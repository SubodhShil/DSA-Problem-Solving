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
## Power function
Syntax: ```pow(number, exponent)```

But, pow(10, 2) provides 99.  
The function pow operates on two floating-point values and returns a floating-point value. When working on integers, the result of pow(10,2) might be stored as 99.9999999, or 100.0000000001. Due to integer truncation, 99.9999999 gets truncated down to 99, and 100.0000000001 gets truncated down to 100.

So safer use is, **```llround(pow(num, exp))```**

## C++ Sorting functions 

```cpp 
sort(nums.begin(), nums.end(), greater<int>());
```

```C++ 20 ranges```
```cpp
 ranges::sort(nums);
```

## Floating point number manipulation
### **```std::fixed```** and **```std::setprecision```**

- Without std::fixed, numbers like 12345.6789 might be printed as 1.23457e+04.
- With std::fixed, the same number would be printed as 12345.678900.
- To display a floating-point number with exactly 3 decimal places in fixed-point notation, you would use std::fixed to specify the format and std::setprecision(3) to specify the number of decimal places.

```cpp
    double x = 5324.123;
    /// with providing only setprecision(5) it will show total 5 digits all together
    cout << setprecision(5) << x << endl; /// 5324.1
    /// but with providing fixed, setprecision(5) works only for floating-point digits
    /// here this also added two zeros at the end of the floating point since we asked for 5 places and the floating-point only contains three digits.
    cout << fixed << setprecision(5) << x << endl; // 5324.12300
```

## Decimal to binary conversion 

```cpp
int n = 5;
string s = bitset<32>(n).to_string();  /// 101
```

## Premutation 

```cpp
void permutation()
{
    int n = 3;
    int arr[3] = {1, 2, 3};
    do
    {
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (prev_permutation(arr, arr + n));
    // } while (next_permutation(arr, arr + n));
}
```

# **```Tips```**

- Make sure to use round() function with pow() to avoid precision error. For more accuracy you can use the following code snippet to calculate power of integers.

```cpp
#define ull unsigned long long
ull uint_pow(ull base, ull exp)
{
    ull result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }

    return result;
}
```

- To accurately calculate the logarithm value for an integer number use the following code.
```cpp
int n = 32;
int power = __lg(n);
```

- To accurately calculate the square root value for an integer number use the following code.
```cpp
void safer_SQRT_int_2()
{
    long double res = exp(log(n) / 2);
    int floorRes = floor(res);

    if (res * res == n)
        cout << res << endl;
    else
        cout << floorRes << endl;
}
```