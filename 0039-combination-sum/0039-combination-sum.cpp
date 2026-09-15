class Solution {
public:
    void solve(vector<int>& candidates, int target,int index,vector<int>& output,vector<vector<int>>&ans){

        if(target == 0){
            ans.push_back(output);
            return;
        }
        if(index >= candidates.size()){
            return ;
        }
        if(target < 0){
            return;
        }
        output.push_back(candidates[index]);
        solve(candidates,target - candidates[index], index, output, ans);
        output.pop_back();
              
        solve(candidates,target,index+1,output,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int index = 0;
        vector<int>output;
        solve(candidates,target,index,output,ans);
        return ans;

    }
};