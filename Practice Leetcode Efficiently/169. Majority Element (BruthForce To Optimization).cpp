class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int, int> map; 
        
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        
        int result = 0;
        for(auto it : map){
            if(it.second > n/2){
                result =  it.first;
            }
        }
        return result;
}

// 169. Majority Element Using Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Moore's Voting Algorithm
        int n = nums.size();
        
         int MajorityCount = 0;
         int MajorityElement = 0;
        
        for(int i = 0; i<n; i++){
            
            if(MajorityCount == 0){
                // make first element count 1 make, this is majority Element,
                // condtion-1 -> if comes again increase the count
                // conditon-2 -> if does not come again decrease the count 
                // end of the day,you will have the MajorityElement as result 
                MajorityElement = nums[i];
                MajorityCount = 1;
            }else if(nums[i] == MajorityElement){
                MajorityCount++;
            }else{
                MajorityCount--;
            }
        }
        return MajorityElement;
    }
};