class Solution {
private:
    int SearchingFirst(vector<int> & nums,int key){
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
        int currentMid = -1;
        while(start <= end){
            if(nums[mid] == key){
                currentMid = mid;
                end = mid - 1;
            }else if(nums[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return currentMid;
    }
     int SearchingLast(vector<int> & nums,int key){
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
        int currentMid = -1;
        while(start <= end){
            if(nums[mid] == key){
                currentMid = mid;
                start = mid + 1;
            }else if(nums[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return currentMid;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPostion = SearchingFirst(nums,target);
        int LastPostion = SearchingLast(nums,target);

        return {firstPostion,LastPostion};
    }
};