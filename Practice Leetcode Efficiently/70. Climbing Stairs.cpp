// 70. Climbing Stairs

class Solution {
private:
// Memorization of the code
   int solve(int n, vector<int> &dp){
       if(n == 0) return 1;
       if(n == 1) return 1;
       
       // memorization 
       if(dp[n] != -1) {
           return dp[n];
       }

       int onesteps = solve(n-1,dp);
       int twosteps = solve(n-2,dp);

       return dp[n] = onesteps + twosteps;
   }

// Top down appraoch
public:
    int climbStairs(int n) {
        
        int dp[n+1];
        
        // starting value of the dp store
         dp[0] = 1;
         dp[1] = 1;
        
        for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};