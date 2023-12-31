from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        for i in length:
            j = i
            for j in length:
                if nums[i]+nums[j] == target:
                    return [i,j]
        return []
