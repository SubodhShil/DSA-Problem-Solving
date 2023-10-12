# https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?

class Solution:
    def search(self, arr, N, X):
        for i in range(N):
            if arr[i] == X:
                return i
        return -1
