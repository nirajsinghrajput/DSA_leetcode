class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        while(idx >= 0) {
            int sum = digits[idx] + 1;
            if(sum == 10) {
                digits[idx] = 0;
                if(idx == 0){
                    digits.insert(digits.begin(), 1);
                }    
            }
            else {
                digits[idx] = sum;
                break;                
            }
            idx--;
        }
        return digits;   
    }
};