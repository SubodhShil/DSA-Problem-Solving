# Segmented sieve

A typical sieve method can only identify prime numbers in the integer range (10^9). A segmented sieve, on the other hand, is used to compute all prime numbers for a range that exceeds the acceptable range of integers.

You will be given a range where it includes to points such as L and R. R is an number that is greater than 10^8 (for a boolean global array) which oveflows the valid range of that size of array.  

In addition to this, the difference of the range is ```R - L``` is a valid size (R - L < 10^8) for creating an array.

&nbsp;

> ## **Algorithm steps**

    1. Create an array of size (R - L + 1), let's say 'rangeArraySieve[]'. Our prime numbers will be derived from this array.

    2. Find the primes in the range of '2 to √R' and store them in an array, let's say 'secondaryArray[]'.
            - Why we have taken '2 to √R'? R doesn't overflow the range, so creating this size of array would be safe. Value of √R is atmost 10^6

    3. Now start traversing 'secondaryArray and marking it in 'rangeArraySieve according to the following steps:

        - All elements of the secondaryArray[]' that are marked as 'true' and 'false' will also be marked 'true' and 'false' accordingly in the rangeArraySieve[]' array.
        - The multiples of 'true' values from 'secondaryArray[]' values have to be marked 'false' in 'rangeArraySieve[]'.

    4. Create an array where we will be storing primes or 'true' marked elements from 'rangeArraySieve[]. Let's say the array is 'allPrimes[]'. This is the resulting array that we have to return.
