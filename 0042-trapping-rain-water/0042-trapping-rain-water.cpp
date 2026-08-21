class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int count = 0;

        int s = 0;

        while (s < n - 1) {

            // zero height ko skip karo
            if (height[s] == 0) {
                s++;
                continue;
            }

            int e = s + 1;
            int best = -1;

            // right side me boundary search karo
            while (e < n && height[e] < height[s]) {

                // sabse badi chhoti boundary store karo
                if (best == -1 || height[e] > height[best]) {
                    best = e;
                }

                e++;
            }

            // Case 1: height[s] se badi/equal boundary mil gayi
            if (e < n) {

                for (int i = s + 1; i < e; i++) {
                    count += height[s] - height[i];
                }

                s = e;
            }

            // Case 2: badi boundary nahi mili
            else {

                if (best == -1)
                    break;

                for (int i = s + 1; i < best; i++) {
                    count += height[best] - height[i];
                }

                s = best;
            }
        }

        return count;
    }
};