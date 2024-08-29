#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  // Renamed the stack to 'st' to avoid conflict with the string 's'.
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '{' || ch == '[' || ch == '(') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    char top = st.top();
                    if ((ch == ')' && top == '(') || 
                        (ch == '}' && top == '{') || 
                        (ch == ']' && top == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }    
        return st.empty();
    }
};
