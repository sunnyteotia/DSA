class Solution {
public:
    int romanToInt(string s) {
       // Map for symbol to value
    unordered_map<char, int> lookup = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        // If current value is less than the next, subtract it
        if (i + 1 < n && lookup[s[i]] < lookup[s[i + 1]]) {
            result -= lookup[s[i]];
        } else {
            result += lookup[s[i]];
        }
    }
    return result;
    }
};