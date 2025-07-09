
#include <string>
using namespace std;

    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                if (depth > 0)  result += c;
                depth++;
            }
            else
            {
                depth--;
                if (depth > 0) result += c;
            }
        }
        return result;
    }

    int main() {
        // Example usage
        string input = "(()())(())";
        string output = removeOuterParentheses(input);
        // Output should be "()(())"
        return 0;
    }