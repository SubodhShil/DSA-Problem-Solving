class Solution:
    def search(self, nums: list[int], target: int) -> bool:

        # binary search variables
        start, end = 0, len(nums) - 1

        while start <= end:
            mid: int = start + (end - start) // 2
            if nums[mid] == target:
                return True

            if nums[mid] == nums[start]:  # discard duplicate mid value
                start += 1
            elif nums[mid] > nums[start]:  # eheck whether left portion is sorted
                if nums[mid] > target >= nums[start]:  # check target is available
                    end = mid - 1
                else:
                    start = mid + 1
            else:
                if nums[end] >= target > nums[mid]:
                    start = mid + 1
                else:
                    end = mid - 1

        return False


sol1 = Solution()
# print(sol1.search([4, 5, 6, 6, 7, 0, 1, 2, 4, 4], 0))
# print(sol1.search([11, 20, 33, 55, -2, -1, 0, 5, 9], -2))
print(sol1.search([1, 0, 1, 1, 1], 0))
