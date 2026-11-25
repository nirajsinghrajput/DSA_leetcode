class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j = jewels.size();
        int s = stones.size();
        
        int count = 0;
        for(int i = 0; i < s; i++) {
            if(jewels.find(stones[i]) != string::npos) {
                count++;
            }
        }
        return count;
    }
};