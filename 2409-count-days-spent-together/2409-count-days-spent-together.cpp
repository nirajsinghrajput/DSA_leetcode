class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        int first_arrival = 0;
        int last_arrival = 0;
        int first_to_leave = 0;
        int last_to_leave = 0;

        int aA = 0;
        for(int i = 0; i < stoi(arriveAlice.substr(0, 2)); i++) {
            aA += days[i];
        }
        aA += stoi(arriveAlice.substr(3, 2));

        int aB = 0;
        for(int i = 0; i < stoi(arriveBob.substr(0, 2)); i++) {
            aB += days[i];
        }
        aB += stoi(arriveBob.substr(3, 2));

        first_arrival = min(aA, aB);
        last_arrival = max(aA, aB);

        int lA = 0;
        for(int i = 0; i < stoi(leaveAlice.substr(0, 2)); i++) {
            lA += days[i];
        }
        lA += stoi(leaveAlice.substr(3, 2));

        int lB = 0;
        for(int i = 0; i < stoi(leaveBob.substr(0, 2)); i++) {
            lB += days[i];
        }
        lB += stoi(leaveBob.substr(3, 2));

        first_to_leave = min(lA, lB);
        last_to_leave = max(lA, lB);

        if(last_arrival > first_to_leave) return 0;
        return first_to_leave - last_arrival + 1;
    }
};