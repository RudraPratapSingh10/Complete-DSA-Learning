class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            long long hoursNeeded = 0;
            for (int pile : piles) {
                hoursNeeded += (pile + mid - 1) / mid;
            }
            if (hoursNeeded <= h) {
                hi = mid; 
            } else {
                lo = mid + 1; 
            }
        }
        
        return lo;
    }
};