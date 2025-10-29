#include <bitset>

using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        string binary = bitset<10>(n).to_string();

        int start_index = 0;
        for (int i = 0; i < 10; i++) {
            if (binary[i] == '1') {
                start_index = i;
                break;
            }
        }

        string max_binary = "";
        for (int i = 0; i < 10 - start_index; i++) {
            max_binary += '1';
        }

        int max_n = bitset<10>(max_binary).to_ulong();

        return max_n;
    }
};