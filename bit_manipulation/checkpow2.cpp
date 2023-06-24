class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n==1) return true;
        if(n & 1 || n==0) return false; // odd or zero
        while(n!=1)
        {
            if(n%2!=0) return false;
            n = n/2;
        }
        return true;
    }
};