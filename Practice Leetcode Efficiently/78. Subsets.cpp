class Solution {
private:
    void solve(int index, vector<int> & nums, vector<int> & subResult, vector<vector<int>> &result){
        
        if(index == nums.size()){
            result.push_back(subResult);
            return;
        }
 
        // ✔️ pick the element from the nums array
         subResult.push_back(nums[index]);
         solve(index+1, nums,subResult, result);
        
        // ❌ does not pick the element from the nums array
        subResult.pop_back();
        solve(index+1, nums,subResult, result);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subResult;
        int index = 0;
        
        // function envoked 
        solve(index,nums,subResult,result);
        // return the 2-d array result
        return result;
    }
};