class Solution {
public:
    string getPermutation(int n, int k) {
        string setOfN;
        for(int i = 0; i < n; i++){
            setOfN += to_string(i+1);
        }
        int count = 1;
        while(count < k){
            kthPermutation(setOfN);
            count++;
        }

        return setOfN;
    }
    void kthPermutation(string& kth){
        for(int i = kth.size()-2; i >= 0; i--){
            if(kth[i] < kth[i+1]){
                int j = kth.size()-1;
                while(kth[j] <= kth[i]){
                    j--;
                }
                swap(kth[i],kth[j]);
                reverse(kth.begin()+i+1,kth.end());
                return;
            }
        }
    }
};