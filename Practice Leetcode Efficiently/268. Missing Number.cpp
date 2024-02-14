// 268. Missing Number


// appraoches all -> couting + hashmap + math + xor approach 

// MISSING NUMBER (NUMBER GUM HO GAYA THA, MAINE DHOONDH LIYA)

// Intuition
// Dost ne bola XOR operation use kar, to kar diya.

// Approach
// Kaafi simple hai. It takes two numbers as operands and does XOR on every bit of two numbers.
// The result of XOR is 1 if the two bits are different. XOR ke baare mein thoda khud se bhi padhoge to samajh jaaoge.
// Zyaada waqt nahi lagega.
    // code - 1
    // int missingNumber(vector<int>& nums) {
    //     int ElementXor = nums.size();
    //     int mask = 0;
    //     for(int i= 0; i<nums.size(); i++){
    //         mask = mask ^ i;
    //         ElementXor = ElementXor ^ nums[i];
    //     }
    //     int result = mask ^ ElementXor;
    //     return result;
    // }


//  code - 2 - MathMathicall concepts used here
class Solution {
public: 
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
};