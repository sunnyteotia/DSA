class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0}; 
          
          // Get the length of the strings
          int n = s.size(); 
          
          // Traverse each character of the strings
          for (int i = 0; i < n; ++i) {
              // If previous positions of current characters differ, return false
              if (m1[s[i]] != m2[t[i]]) return false;
              
              // Update the position with current index + 1
              m1[s[i]] = i + 1;
              m2[t[i]] = i + 1;
          }
          
          // If no mismatch is found, return true
          return true;
    }
};