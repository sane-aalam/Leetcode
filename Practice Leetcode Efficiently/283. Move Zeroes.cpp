
// hits - are you non-zero element or Not?

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int areyouNonZeroElement = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[areyouNonZeroElement]);
                areyouNonZeroElement++;
            }
        }
    }
};