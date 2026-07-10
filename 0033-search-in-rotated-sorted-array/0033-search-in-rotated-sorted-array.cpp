class Solution {
public:

int getpivot(vector<int>& nums){
        int n = nums.size();
        int s = 0 ;
        int e = n-1;

        while(s < e){
            int mid = s+(e-s)/2;

            if(nums[mid] >=nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s+(e-s)/2;

        }
        return s ;
}


int Binarysearch(vector<int>& nums, int s,int e,int target){
    int start = s;
    int end = e;
    

    while(start <= end){
        int mid   = (start + end)/2;

        if(nums[mid] == target){
            return mid;
        }
        
        if(target > nums[mid]){
            start = mid+1;
        }
        
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
    
    int n = nums.size();

    int pivot =  getpivot(nums);

    if(target >= nums[pivot] && target <= nums[n-1]){
        return Binarysearch(nums,pivot,n-1, target);
    }
    else{
        return Binarysearch( nums, 0,pivot -1,target);
    }
    }
};