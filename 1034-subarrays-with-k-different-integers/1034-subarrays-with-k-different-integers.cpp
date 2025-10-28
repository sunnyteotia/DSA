class Solution {
    int helper(vector<int>& nums, int k){
        int n=nums.size();
        if (k == 0 || n==0) return 0;

        // Hash map to store frequency of characters in current window
        unordered_map<int, int> freq;

        // Initialize left pointer of sliding window
        int left = 0;

        // Initialize variable to store maximum length
        int answer = 0;

        // Loop through the string using right pointer
        for (int right = 0; right < n; right++) {
            // Include current character into frequency map
            freq[nums[right]]++;

            // Shrink window if number of distinct characters exceeds k
            while (freq.size() > k) {
                freq[nums[left]]--;

                // If character count becomes zero, erase from map
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }

                // Move left pointer ahead
                left++;
            }

            // Update maxLen with current valid window size
            // if(freq.size()==k)
            answer+=(right-left+1);
        }

        // Return the final answer
        return answer;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};