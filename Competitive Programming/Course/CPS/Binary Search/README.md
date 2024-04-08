## **```Lower bound```**

- কোন একটি sorted array তে সর্বনিম্ন কোন index -এ কোন element 'x' রাখলে element টি sorted থাকবে, সেই index টিকে element 'x' এর lower bound বলে । 

- Lower bound এর index টি বুঝায় ঐ array তে element 'x' এর আগে তার থেকে কতগুলো ছোট element আছে । 

## **```Upper bound```**

- কোন একটি sorted array তে সর্বোচ্চ কোন index -এ কোন element 'x' রাখলে element টি sorted থাকবে, সেই index টিকে element 'x' এর upper bound বলে । 

- Upper bound একটি element 'x' এর সর্বোচ্চ index এর পরবর্তী index । 

- Upper bound এর index টি দ্বারা বুঝায় যে ঐ array তে element 'x' এর আগে সেই element সহ আর কতগুলো ছোট element আছে । 

### Upper bound and lower bound to calculate frequency 

```Total frequency of x = Upperbound(x) - Lowerbound(x)```

> - Element x যদি array তে না থাকে সেক্ষেত্রে element 'x' এর upper bound এবং lower bound একই হবে । 



