class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // create the Vector for storing the Index value, Actual Element of the array
        vector<pair<int,int>> container;
        
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            container.push_back({nums[i],i});
        }
        
        // we have to sort the container array not actural array
        sort(container.begin(),container.end());
        int start = 0;
        int end = n-1;
        
        vector<int> v;
        
        while(start < end){
            int twosum = container[start].first + container[end].first;
            if(twosum == target){
                v.push_back(container[start].second);
                v.push_back(container[end].second);
                return v;
            // syntax error
            }else if(twosum < target){
                start++;
            }else{
                end--;
            }
        }
        return v;
    }
};