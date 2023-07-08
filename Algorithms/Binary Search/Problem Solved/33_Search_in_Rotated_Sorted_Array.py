# https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution:
    def search(self, nums: list[int], target: int) -> int:

        # * variables for binary search
        start, end = 0, len(nums) - 1  # multiple assignment statement

        while start <= end:
            mid = start + (end - start) // 2

            if nums[mid] == target:
                return mid

            # ^ check for left sorted portion
            elif nums[mid] > nums[start]:
                if nums[mid - 1] >= target >= nums[start]:
                    end = mid - 1

                # ^ otherwise go to right sorted portion
                else:
                    start = mid + 1

            # ^ check in the right sorted portion
            else:
                if nums[end] >= target >= nums[mid + 1]:
                    start = mid + 1
                else:
                    end = mid - 1

        return -1


ans1 = Solution()
# print(ans1.search([4, 5, 6, 7, 0, 1, 2], 0))
print(ans1.search([3, 1], 1))
