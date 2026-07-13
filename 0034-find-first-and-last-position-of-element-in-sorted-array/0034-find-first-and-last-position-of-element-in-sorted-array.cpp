class Solution {
public:
    int firstocc(vector<int> &nums, int n, int key) {
        int s = 0, e = n - 1, ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == key) {
                ans = mid;
                e = mid - 1;
            }
            else if (key > nums[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }

    int lastocc(vector<int> &nums, int n, int key) {
        int s = 0, e = n - 1, ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == key) {
                ans = mid;
                s = mid + 1;
            }
            else if (key > nums[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int first = firstocc(nums, n, target);
        int last = lastocc(nums, n, target);

        return {first, last};
    }
};