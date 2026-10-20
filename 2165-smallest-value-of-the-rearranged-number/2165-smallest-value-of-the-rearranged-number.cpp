class Solution {
public:
    long long smallestNumber(long long num) {
        map<int,int> mp;

        long long ans = 0;

        long long temp = abs(num);

        while (temp > 0) {
            mp[temp % 10]++;
            temp /= 10;
        }
        if(num > 0) {
            auto firstIt = mp.begin();
            for(auto it : mp) {
                if(it.first == 0) {
                        continue;
                }
                for(int i = 0; i < it.second; i++) {
                    ans = ans*10 + it.first;
                    if(ans < 10 && firstIt->first == 0) {
                        ans *= pow(10, firstIt->second);
                    }
                }
            }
        }
        else {
            for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
                for(int i = 0; i < it->second; i++) {    
                    ans = ans*10 + it->first;
                }
            }
            ans *= -1;
        }
        return ans;
    }
};