class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        else:
            num=x
            pal=0
            while num:
                pal=10*pal+num%10
                num/=10
            if pal==x:
                return True
            else:
                return False
