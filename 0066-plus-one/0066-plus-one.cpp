class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        while(idx >= 0){
            int sum = digits[idx] + 1;
            if(sum<10){
                digits[idx] = sum;
                break;
            }
            else {
                digits[idx] = 0;                
            }
            if(idx == 0 && sum == 10){
                digits.insert(digits.begin(), 1);
            }
            idx--;
        }
        return digits;   
    }
};