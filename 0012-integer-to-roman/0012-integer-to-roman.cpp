class Solution {
public:
    string intToRoman(int num) {
    vector<string> roman = 
        {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int>    value = 
        {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";
    for (int i = 0; i < value.size() && num > 0; ++i) {
        while (num >= value[i]) {
            result += roman[i];
            num -= value[i];
        }
    }
    return result; 
    }
};