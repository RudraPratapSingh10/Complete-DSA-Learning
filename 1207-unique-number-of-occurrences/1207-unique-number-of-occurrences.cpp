class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int n = arr.size();

        vector<int>freq;

        for(int i = 0 ;i < n; i++){
            int cnt = 1;

            while(i+1 < n && arr[i] == arr[i+1]){
                cnt++;
                i++;
            }
            freq.push_back(cnt);
        }

        sort(freq.begin(),freq.end());
        for(int i = 1; i<freq.size() ;i++){
            if(freq[i] == freq[i-1]){
                return false;
            }
        }
        return true;
    }
};