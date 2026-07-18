class Solution {
public:

int gcd(int a , int b){

    while( b!= 0){
        int rem  = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    int findGCD(vector<int>& nums) {
        int n = nums.size();

        int mini =INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0;i<n;i++){
            if(nums[i] < mini)  mini = nums[i];
            if(nums[i] > maxi) maxi = nums[i];
        }

        return gcd(maxi,mini);
    }
};