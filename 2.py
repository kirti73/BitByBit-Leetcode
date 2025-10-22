class Solution(object):
    def removeOuterParentheses(self, s):
        counter = 0
        start = 0
        t = ''
        for i in range(len(s)):
            if s[i] == '(':
                counter += 1
            else:
                counter -= 1
            if counter == 0:
                t += s[start + 1 : i]
                start = i + 1
        return t


