class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();

        for(int i =0 ;i<n;i++){
            for(int j= i+1;j<n;j++){
                if(nums[i] == 0){
                    swap(nums[j],nums[i]);
                }
                else{
                    continue;
                }
            }
        }
        return;
    }
};