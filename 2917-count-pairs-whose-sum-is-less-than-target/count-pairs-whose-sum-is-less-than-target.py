class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
       ans=0
       for i in range(len(nums)):
        for j in range (i):
            if nums[i]+nums[j]<target:
                ans+=1
       return ans         