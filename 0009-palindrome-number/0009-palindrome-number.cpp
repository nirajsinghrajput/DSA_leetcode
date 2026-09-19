class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        vector<int> arr;
        int rem;
        while(x!=0){
            rem = x%10;
            x = x/10;
            arr.push_back(rem);
        }
        int i = 0;
        int j = arr.size() - 1;
        while(!(i>=j)){
            if(arr[i] != arr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};