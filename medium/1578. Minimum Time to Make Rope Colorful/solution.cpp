class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        if (colors.size() <= 1) return 0;

        int time = 0;
        for (size_t i = 1; i < colors.size(); i++) {
            if (colors[i] == colors[i-1]) {
                if (neededTime[i] < neededTime[i-1]) {
                    time += neededTime[i];
                    neededTime[i] = neededTime[i-1];;
                } else {
                    time += neededTime[i-1];
                }
            }
        }

        return time;
    }
};