from os import *
from sys import *
from collections import *
from math import *


def isPossible(arr, n, m, mid):
    studentCount = 1
    pageCount = 0

    for i in range(n):
        if (pageCount + arr[i]) <= mid:
            pageCount += arr[i]
        else:
            studentCount += 1
            if (studentCount > m) or (arr[i] > mid):
                return False

            pageCount = arr[i]

    return True


def allocateBooks(arr, n, m):
    start, end = 0, sum(arr)
    ans = -1
    mid = start + (end - start) // 2

    while start <= end:
        if isPossible(arr, n, m, mid) == True:
            ans = mid
            end = mid - 1
        else:
            start = mid + 1

        mid = start + (end - start) // 2

    return ans


# & Solution try
print(allocateBooks([12, 34, 67, 90], 4, 2))

"""
* The problem can easily be solved by defining the search space.
* Defining the search space for binary searching:
    ^ lower bound of the search space is the single book with minimum pages
    ^ upper bound of the search space isn't specific but it is combine inside the sum of the entire list or array
"""
