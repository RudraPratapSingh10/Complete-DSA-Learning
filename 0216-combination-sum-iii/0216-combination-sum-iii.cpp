class Solution {
public:
    void solve(int k, int n, int start,vector<int>& output,vector<vector<int>>& ans) {

  
        if (n == 0 && output.size() == k) {
            ans.push_back(output);
            return;
        }

        
        if (n < 0 || output.size() > k) {
            return;
        }

        for (int num = start; num <= 9; num++) {

            
            output.push_back(num);

            solve(k, n - num, num + 1, output, ans);

         
            output.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;

        solve(k, n, 1, output, ans);

        return ans;
    }
};