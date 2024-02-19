class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        else if (n==0){
            return false;
        }
        else {
            int x = log2(n);
            if(pow(2,x)==n) {
                return true;
            }
            return false;   
        }
    }
};