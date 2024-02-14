class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     
        int TwoPointerIndex = 0;
        int RunningSum = 0;
        
        for(int j = 0; j<nums.size(); j++){
            RunningSum = RunningSum + nums[j];
            nums[TwoPointerIndex] = RunningSum;
            TwoPointerIndex++;
        }
        return nums;
    }
};