class Solution {
    public boolean isPalindrome(int x) {
        
        if(x < 0)
        return false;

        else
        {
            int n=x,r=0;
            while(x != 0)
            {
                r = r * 10 + x % 10; 
                x /= 10;
            }
            if(n == r)
            return true;
            else
            return false;
        }
    }
}