class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;   // minimum possible open brackets
        int high = 0;  // maximum possible open brackets

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else { // '*'
                low--;    // treat * as ')'
                high++;   // treat * as '('
            }

            // Even the maximum possible opens is negative
            if (high < 0)
                return false;

            // low cannot be negative
            if (low < 0)
                low = 0;
        }

        // Valid only if we can end with exactly 0 open brackets
        return low == 0;
    }
};