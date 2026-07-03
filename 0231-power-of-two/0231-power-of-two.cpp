class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
    return false;
        int cnt = 0;
        int msb= (int)(log2(n))+1;

        for(int i = 0;i<msb;i++){
           if( (n>>i) & 1) cnt++;
            
        }
        return cnt == 1;

    }
};