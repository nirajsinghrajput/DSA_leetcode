class Solution {
public:
    vector<string> ans;
    void generator(string& brkt, int n, int open, int close) {
        if(brkt.length() == 2*n) {
            ans.push_back(brkt);
            return;
        }
        
        if(open == 0) {
            brkt.push_back(')');
            close--;
            generator(brkt, n, open, close);
            brkt.pop_back();
        }
        else if(close > open){
            brkt.push_back(')');
            close--;
            generator(brkt, n, open, close);
            brkt.pop_back();
            close++;
        }
        if(open > 0 ) {
            brkt.push_back('(');
            open--;
            generator(brkt, n, open, close);
            brkt.pop_back();
            open++;
        }
        
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        string brkt;

        generator(brkt, n, n, n);

        return ans;
    }
    
};