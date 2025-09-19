class Solution {
public:
    bool rotateString(string s, string goal) {
          if (s.length() != goal.length()) return false;
        string dString=s+s;
        return dString.find(goal)<dString.length();
    }
};