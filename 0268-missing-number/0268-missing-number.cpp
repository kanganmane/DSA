class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int value = n;
        while(low<= high){
            int mid = low+(high-low)/2;
            if(mid == nums[mid]){
                low = mid+1;
            }
            if(mid != nums[mid]){
                high = mid-1;
                value = mid;
            }

        }
        return value;

    }
};