#include <iostream>
#include <unordered_map>

using namespace std;

bool isPalindrome(string s) { 
    int n = s.length(); 
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n-1-i]) {
            return false; 
        }
    }
    return true; 
}

int main()
{
    int t; 
    string s; 
    unordered_map<char, int> m; 
    cin >> t; 
    for (int i = 0; i < t; i++) { 
        cin >> s; 
        for (int j = 0; j < s.length(); j++)
            m[s[j]]++; 
        int o = 0;
        char oc;
        for (auto x: m) {
            if (x.second % 2 == 0) {
                o++; 
                oc = x.first; 
            }
        }
        if (m.size() == 1) {
            cout << -1 << "\n"; 
        } else { 
            char temp = s[0];
            s[0] = s[1];
            s[1] = temp; 
            cout << s << "\n";  
        }
        m.clear(); 
    }
    return 0;
}
