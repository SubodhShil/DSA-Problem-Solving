# https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?

class Solution1:
    # Function to check if two arrays are equal or not.
    def check(self, A, B, N):
        A.sort(), B.sort()

        for i in range(N):
            if (A[i] != B[i]):
                return False

        return True
