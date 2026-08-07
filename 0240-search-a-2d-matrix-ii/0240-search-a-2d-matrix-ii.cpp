class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int rowindex = 0;
        int colindex = n-1;
        while(rowindex < m && colindex >= 0  ){
            int element = matrix[rowindex][colindex];

            if(element == target){
                return 1;

            }
            else if(element < target){
                rowindex++; 
            }
            else{
                colindex--;
            }
        }
        return false;
        

        
    }
};