// 15. 3Sum

#include <vector>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        vector<vector<int>> result;
        set<vector<int>> st;
        
        sort(nums.begin(),nums.end());
        int zeroEqual = 0;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            int start = i + 1;
            int end = n - 1;
            
            while(start < end){
                int x = nums[i];
                int y = nums[start];
                int z = nums[end];
                
                int totalSum = x + y + z;
                if(totalSum == zeroEqual){
                    st.insert({x,y,z});
                    start ++;
                    end --;
                }else if(totalSum < zeroEqual){
                    start++;
                }else{
                    end--;
                }
            }
        }
        
        for(auto it : st){
            result.push_back(it);
        }
        return result;
    }
};