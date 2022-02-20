#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std; 

string  s; 
unordered_set<char> u; 
unordered_map<char, int> m; 
int main()
{
    cin >> s; 
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] != ',' && s[i] != ' ' && s[i] != '}') {
            cout << s[i] << "\n";
            u.insert(s[i]);
        }
    }
    
    for (auto elem: u) 
        cout << elem << " "; 
    cout << u.size(); 
    return 0;
}