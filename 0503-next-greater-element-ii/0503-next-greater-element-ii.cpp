class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        // Initialize the result array with -1
        vector<int> result(n, -1); 
        // Stack to store indices
        stack<int> st;

        // Iterate through the array twice (0 to 2*n - 1) 
        // to simulate the circular nature.
        // We use the modulo operator (i % n) to access elements of nums.
        for (int i = 0; i < 2 * n; ++i) {
            int num = nums[i % n]; // Get the current number

            // Monotonic Stack logic: pop elements from the stack 
            // whose next greater element is the current 'num'.
            while (!st.empty() && nums[st.top()] < num) {
                // The index st.top() has 'num' as its Next Greater Element
                result[st.top()] = num; 
                st.pop();
            }
            
            // We only push indices corresponding to the *original* array 
            // (i < n) to ensure we only calculate results for the 
            // initial n elements.
            if (i < n) {
                st.push(i);
            }
        }
        
        return result;
    }
};