> # ```Two Pointers```

The two-pointer technique is a common algorithm design technique that uses two pointers to scan through an array or other data structure. The pointers can move in either the same direction or in opposite directions.

## ```Opposite direction two pointers```

In the case of opposite direction two pointers, the pointers start at opposite ends of the array and move towards each other. This technique is often used to solve problems such as finding the minimum or maximum value in an array, or finding the first occurrence of a given value in an array.

Here is an example of how to use the two-pointer technique to find the minimum value in an array:

**Python**

```
def find_min(array):
    # Initialize the pointers
    start = 0
    end = len(array) - 1

    # Initialize the minimum value
    min_value = array[start]

    # Iterate through the array
    while start < end:
        # Check if the current value is less than the minimum value
        if array[start] < min_value:
            min_value = array[start]

        # Move the pointers
        start += 1
        end -= 1

    return min_value
```

Here is an example of how to use the two-pointer technique to find the first occurrence of a given value in an array:

**Python**

```
def find_first_occurrence(array, value):
    # Initialize the pointers
    start = 0
    end = len(array) - 1

    # Initialize the flag
    found = False

    # Iterate through the array
    while start <= end:
        # Check if the current value is equal to the given value
        if array[start] == value:
            found = True
            break

        # Move the pointers
        start += 1
        end -= 1

    # Return the index of the first occurrence of the value
    if found:
        return start
    else:
        return -1
```
