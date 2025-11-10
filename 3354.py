class Solution(object):
    def countValidSelections(self, nums):
        total = sum(nums)
        left_sum = 0
        valid = 0

        for x in nums:
            if x == 0:
                diff = abs(2 * left_sum - total)
                if diff == 0:
                    valid += 2    
                elif diff == 1:
                    valid += 1    
            else:
                left_sum += x

        return valid
