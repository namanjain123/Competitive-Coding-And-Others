class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=nums[0];
        int k=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum = max(nums[i], sum+nums[i]);
        maxs = max(maxs, sum);
        }
        return maxs;
    }
};