class Solution:
    def mySqrt(self, x: int) -> int:

        # ^ binary search variables
        """
        root of any number lies between 0 to that number
        """
        start, end, ans = 0, x, 0

        # binary search iteration
        while start <= end:
            mid: int = start + (end - start) // 2

            if (mid * mid) > x:
                end = mid - 1
            else:
                ans = mid  # save the possible solution
                start = mid + 1

        return ans


number1 = Solution()
print(number1.mySqrt(8))

"""
good solutions:
https://leetcode.com/problems/sqrtx/solutions/1625550/2-sol-sqrt-x-beats-100-c-binary-search/?orderBy=most_votes&languageTags=cpp

"""
