class Solution(object):
    def commonFactors(self, a, b):
        counter=0
        x,y=min(a,b),max(a,b)
        for i in range(1,x+1):
            if x%i==0 and y%i==0:
                counter+=1
        return counter
