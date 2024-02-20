// 53. Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maximumSumStore = INT_MIN;
        
        for(int index = 0; index < nums.size(); index ++){
            currentSum = currentSum + nums[index];
            maximumSumStore = max(maximumSumStore,currentSum);
            
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maximumSumStore;
    }
};