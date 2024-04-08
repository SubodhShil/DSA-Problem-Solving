# https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution:
    def singleNonDuplicate(self, nums: list[int]) -> int:
        # binary search variables
        start, end = 0, len(nums) - 1

        while start <= end:
            mid = start + (end - start) // 2

            # * what if mid is the single element
            # ^ first or last element error handling: if list contains a single value than it is that single element
            if (mid - 1 < 0 or nums[mid - 1] != nums[mid]) and (mid + 1 >= len(nums) or nums[mid + 1] != nums[mid]):
                # if nums[mid - 1] < nums[mid] < nums[mid + 1]: #! this could be wrong because sorted list can be descending as well
                return nums[mid]

            # search in the odd portion
            leftSize = mid - 1 if nums[mid - 1] == nums[mid] else mid

            if leftSize % 2 == 0:
                start = mid + 1
            else:
                end = mid - 1


ans1 = Solution()


# print(ans1.singleNonDuplicate([20, 20, 30, 30, 10]))

print(ans1.singleNonDuplicate([3, 3, 7, 7, 10, 11, 11]))

"""
Thoughts and intuitions:
Observations:
* [1, 1, 5, 6, 6, 9, 9, 10, 10]
* the array or list size always be odd
* discard either left or right part
    * among them one part must have odd number of elements -> discard that
    * find the similar element
    * even list (% 2 != 0) and left element != mid element: go left
    * odd list (% 2 == 0) and left element == mid element: go left
"""
