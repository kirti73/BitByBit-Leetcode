class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort() 
        n = len(nums)
        ans = []

        for i in range(n):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            target = -nums[i]  
            seen = {}           

            for j in range(i + 1, n):
                complement = target - nums[j]
                if complement in seen:
                    triplet = [nums[i], complement, nums[j]]
                    if triplet not in ans:
                        ans.append(triplet)
                seen[nums[j]] = True 

        return ans

