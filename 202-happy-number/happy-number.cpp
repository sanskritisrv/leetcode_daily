#include <unordered_set>
#include <cmath> // for pow
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> mp;

        while (true) {
            int sum = 0;
            int temp = n;
            while (temp > 0) {
                int digit = temp % 10;
                sum += pow(digit, 2);
                temp /= 10;
            }

            if (sum == 1) return true;

            if (mp.find(sum) != mp.end()) return false;

            mp.insert(sum);
            n = sum;
        }
    }
};
