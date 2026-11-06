class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for( int i = 0;i<len-1;i++){
            for(int j = i+1;j<len;j++){
                int sum = nums[i]+nums[j];
                if(sum == target){
                    return {i,j};
                }

            }
        }
        return {};
    }
};