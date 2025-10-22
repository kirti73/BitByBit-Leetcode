class Solution(object):
    def isPalindrome(self, s):
        org=''
        for i in s:
            if i.isalnum():
                org+=i.lower()
        if org[::]==org[::-1]:
                return True
        else:
            return False
