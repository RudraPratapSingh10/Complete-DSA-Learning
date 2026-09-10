class Solution {
     private:
    void solve(vector<int>& nums,vector<int> output,int index, vector<vector<int>>& ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        int idx = index+1;
        while(idx < nums.size()&& nums[index] == nums[idx]){
            idx++;
        }
        solve(nums,output,idx,ans);

        
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans; 
        
    }
};