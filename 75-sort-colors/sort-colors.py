from typing import List

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        for i in range(n):
            indix = i
            for j in range(i+1, n):
                if nums[j] < nums[indix]:  # Fix comparison reference
                    indix = j
            nums[i], nums[indix] = nums[indix], nums[i]  # Swap correctly
