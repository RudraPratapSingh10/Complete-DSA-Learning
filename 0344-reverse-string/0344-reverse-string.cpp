class Solution {
public:
    void solve(vector<char>& s, int st,int e){
        if(st >e){
            return ;
        }
        swap(s[st],s[e]);
        st++;
        e--;
        solve(s,st,e);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        solve(s,0,n-1);
    }
};