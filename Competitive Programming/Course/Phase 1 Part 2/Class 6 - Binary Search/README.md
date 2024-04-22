**Monotonic function**: A function that maintain the condition of continuously generating lower to higher values (increasing values) or higher to lower values (decreasing values).

Binary search can be applicable to a search space that satisfies the condition of being monotonous.

### **Median**  
1. Median of odd number of sequences: (n / 2) th element   
2. Median of even number of sequences: ((n / 2) th element + (n / 2 + 1) th element) / 2


## **```Lower bound```**

- Lower bound of *x* is the first index that contains value at least x, value >= x.

- কোন একটি sorted array তে সর্বনিম্ন কোন index -এ কোন element 'x' রাখলে element টি sorted থাকবে, সেই index টিকে element 'x' এর lower bound বলে । 

- Lower bound এর index টি বুঝায় ঐ array তে element 'x' এর আগে তার থেকে কতগুলো ছোট element আছে । 

```cpp
    auto it = lower_bound(v.begin(), v.end(), target);
    int value = *it;
    int idx = it - v.begin(); // 0 based index
    int idx2 = lower_bound(v.begin() + 1, v.end(), target) - v.begin(); // 1 based index
```

## **```Upper bound```**

- Upper bound of *x* is the first index of that contains value > x.

- কোন একটি sorted array তে সর্বোচ্চ কোন index -এ কোন element 'x' রাখলে element টি sorted থাকবে, সেই index টিকে element 'x' এর upper bound বলে । 

- Upper bound একটি element 'x' এর সর্বোচ্চ index এর পরবর্তী index । 

- Upper bound এর index টি দ্বারা বুঝায় যে ঐ array তে element 'x' এর আগে সেই element সহ আর কতগুলো ছোট element আছে । 

```cpp
    auto it = upper_bound(v.begin(), v.end(), target);
    int value = *it;
    int idx = it - v.begin();
```

### Upper bound and lower bound to calculate frequency 

```Total frequency of x = Upperbound(x) - Lowerbound(x)```

> - Element x যদি array তে না থাকে সেক্ষেত্রে element 'x' এর upper bound এবং lower bound একই হবে । 

&nbsp;

## Binary search on answer 

### The **k-th** type of questions
1. Find the range of search space **'x'**.
2. As per question suggest find out whether the result is >= k or <= k

```cpp
int l = 0, r = 2e9;
while(l <= r)
{
    int mid = l + (r - l) / 2;
    if(f(mid)) 
    {
        
        /// if question says to find minimum the go left otherwise right    
        // l = mid - 1;
        l = mid + 1;
    }
    else {
        // r = mid + 1;
        r = mid - 1;
    }
}
```
