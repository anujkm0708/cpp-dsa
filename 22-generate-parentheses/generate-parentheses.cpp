class Solution {
public:
    vector<string> result;

    void generate(string current, int open, int close, int n) {
        // If the string is complete
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        // Add opening bracket
        if (open < n) {
            generate(current + "(", open + 1, close, n);
        }

        // Add closing bracket only if valid
        if (close < open) {
            generate(current + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return result;
    }
};