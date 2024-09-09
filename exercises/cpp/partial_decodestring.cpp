/* this solutions seems right to me. might look into this later */

class Solution {
public:
    string decodeString(string s) {

        stack<string> tracker;

        for (char c: s) {
            if (c != ']') {
                string c_as_string(1,c);
                tracker.push(c_as_string);
            } else {
                while(tracker.top() != "[") {
                    string num;
                    string alpha_substring = "";
                    string stack_top = tracker.top(); 

                    while (isalpha(stack_top[0])) {
                        alpha_substring = stack_top + alpha_substring; 
                        tracker.pop();
                        stack_top = tracker.top();
                    }

                    while(isdigit(stack_top[0])) {
                        num += tracker.top(); 
                        tracker.pop();
                        stack_top = tracker.top();
                    }
                    
                    num = reverseString(num);
                    string temp = alpha_substring;
                    for (int i = 0; i < stoi(num)-1; i++) {
                        alpha_substring += temp; 
                    }
                    tracker.push(alpha_substring);
                }
                
            }
        }
        return tracker.top();
    }

    string reverseString(string s) {
        string res;
        for (int i = 0; i < s.length()/2; i++) {
            char temp = s[i]; 
            s[i] = s[s.length()-1-i];
            s[s.length()-1-i] = temp;
        }
        return res;
    }
};
