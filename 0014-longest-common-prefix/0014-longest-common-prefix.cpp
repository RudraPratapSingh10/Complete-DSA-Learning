class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Take the first string as base
        string prefix = strs[0];

        // Compare with each string
        for (int i = 1; i < strs.size(); i++) {
            // Keep reducing prefix until it matches current string
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
