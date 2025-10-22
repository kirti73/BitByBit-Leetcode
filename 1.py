class Solution(object):
    def romanToInt(self, s):
        pr = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        total = 0
        for i in range(len(s) - 1):
            if pr[s[i]] >= pr[s[i + 1]]:
                total += pr[s[i]]
            else:
                total -= pr[s[i]]
        total += pr[s[-1]]
        return total
