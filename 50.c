public class Solution {
    public double myPow(double x, int n) {
        double result = 1;
        long nn = n;
        if (nn < 0) {
            x = 1 / x;
            nn = -nn;
        }
        while (nn > 0) {
            if ((nn&1)!=0) result *= x;
            x *= x;
            nn /= 2;
        }
        return result;
    }
}
