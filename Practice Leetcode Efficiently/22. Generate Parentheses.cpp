// 22. Generate Parentheses

class Solution {
private:
    void solve(int n, int openParentheses, int closeParentheses, vector<string>&result, string str){
        
        // base condtion - when you got the well-formed parentheses
        if(closeParentheses == n ){
            result.push_back(str);
            return;
        }
        
        
        // pick the openParentheses - When we are include the open parenthese, we have to increase the index value
        if(openParentheses < n){
            solve(n,openParentheses+1, closeParentheses,result, str + '(' );
        }
        
        // pick the closeParentheses - - When we are include the close parenthese, we have to increase the index value
        
        // condtion saying ❌ - if open parenthese zada hay close parenthesis se toh you can add close paraenthis 
        if(closeParentheses < openParentheses){
            solve(n,openParentheses,closeParentheses+1, result, str + ')');
        }     
    }  
public:
    vector<string> generateParenthesis(int n) {
     
        int openParentheses = 0;
        int closeParentheses = 0;
        
        vector<string> result;
        
        solve(n,openParentheses,closeParentheses,result,"");
        return result;
    
    }
};