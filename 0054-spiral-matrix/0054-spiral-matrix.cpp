class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        int tp = 0;
        int bt = row - 1;
        int lt = 0;
        int rg = col - 1;

        vector<int> ans;
 
        while (tp <= bt && lt <= rg) {

           
            for (int i = lt; i <= rg; i++)
                ans.push_back(matrix[tp][i]);
            tp++;

            
            for (int i = tp; i <= bt; i++)
                ans.push_back(matrix[i][rg]);
            rg--;

            
            if (tp <= bt) {
                for (int i = rg; i >= lt; i--)
                    ans.push_back(matrix[bt][i]);
                bt--;
            }

            if (lt <= rg) {
                for (int i = bt; i >= tp; i--)
                    ans.push_back(matrix[i][lt]);
                lt++;
            }
        }

        return ans;
    }
};
