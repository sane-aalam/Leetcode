   int missingNumber(vector<int>& nums) {
       int arraySum = 0;
       int LengthSum = 0;

       for(int i = 0; i<nums.size(); i++){
           arraySum = arraySum + nums[i];
       }

         for(int i = 0; i<=nums.size(); i++){
           LengthSum = LengthSum + i;
       }

       return LengthSum - arraySum;
    }