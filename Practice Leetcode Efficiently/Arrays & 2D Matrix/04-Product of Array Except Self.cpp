class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> suffix(n,1);
        vector<int> preffix(n,1);
        
        // calculate the pre-fix
        for(int i = 1; i<n; i++){
            suffix[i] = suffix[i-1] * nums[i-1];
        }
        // calculate the suf-fix 
        for(int i = n-2; i>=0; i--){
            preffix[i] = preffix[i+1] * nums[i+1];
        }

        vector<int> result(n);

        for(int i = 0; i<n; i++){
            result[i] = preffix[i] * suffix[i];
        }
        return result;
    }
};