class Solution {
public:
    int findComplement(int num) {
        if(num == 0) return 1;

        int msb =(int)(log2(num)) +1;

      unsigned int mask = (1U << msb) -1;
       return num ^ mask;
    }
};