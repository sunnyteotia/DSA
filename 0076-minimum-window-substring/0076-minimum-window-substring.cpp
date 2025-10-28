class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for (char c : t) need[c]++;

        unordered_map<char, int> window;
        int have = 0;
        int needCount = need.size();

        int left = 0, minLen = INT_MAX, start = 0;

        for (int right = 0; right < s.size(); ++right) {
            char c = s[right];
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) have++;
            }

            while (have == needCount) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                char lc = s[left];
                if (need.count(lc)) {
                    window[lc]--;
                    if (window[lc] < need[lc]) have--;
                }
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};