class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        map={}
        max_num = None
        max_count = 0
        for i in nums:
            map[i]=map.get(i,0)+1
            if map[i] > max_count:
                max_count = map[i]
                max_num = i
        return max_num
