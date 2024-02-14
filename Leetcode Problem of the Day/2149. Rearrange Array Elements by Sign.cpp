class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int postiveIndex = 0;
        int negativeIndex = 1;
        
        for(auto &currentElement : nums){
            // when CurrentElement is postive Element, We have to put into Even Index value,
            // otherwise put into the odd index 
            // tc and sc - 0(n)
            if(currentElement > 0){
                result[postiveIndex] = currentElement;
                postiveIndex = postiveIndex + 2;
            }else if(currentElement < 0 ) {
                result[negativeIndex] = currentElement;
                    negativeIndex = negativeIndex + 2;
            }
        }
        return result;
    }
};