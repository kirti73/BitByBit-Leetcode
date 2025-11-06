class Solution(object):
    def distinctDifferenceArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        k = []
        for i in range(len(nums)):
            left = len(set(nums[:i+1]))      # distinct count in prefix
            right = len(set(nums[i+1:]))     # distinct count in suffix
            k.append(left - right)
        return k
