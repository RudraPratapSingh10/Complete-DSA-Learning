class Solution {
    private:
    void solve(vector<int>& nums,vector<int> output,int index,set<vector<int>>& st){
        if(index >= nums.size() ){

            st.insert(output);
            return;
        }
        solve(nums, output, index + 1, st);


        
        output.push_back(nums[index]);
        solve(nums,output,index+1,st);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));

        vector<int> output;
        int index = 0;
        set<vector<int>> st;
        solve(nums,output,index,st);
        
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};