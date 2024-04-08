class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        elementsStore = {}

        for i in range(n):
            remain = target - nums[i]
            if remain in elementsStore:
                return [i, elementsStore[remain]]
            elementsStore[nums[i]] = i