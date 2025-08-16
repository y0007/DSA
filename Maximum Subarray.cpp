class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int max_sum = nums[0];
     int curr_max = nums[0];
     for(int i=1; i < nums.size();i++){
        curr_max = max(nums[i],nums[i]+curr_max);
        max_sum = max(max_sum, curr_max);
     }   
     return max_sum;
    }
};
