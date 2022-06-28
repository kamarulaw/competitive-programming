#include <vector>
#include <map>
#include <iostream>


using namespace std; 

bool isMatch(string pattern, string input) { 
    // (1) find indices of stars in pattern + characters before and after
    map<int, vector<char>> star_info; 
    for (int i = 0; i < pattern.length(); i++) { 
        if (pattern[i] == '*') {
            if (i != 0 && i != pattern.length()-1) {
                star_info[i].push_back(pattern[i-1]);
                star_info[i].push_back(pattern[i+1]);
            }  
        }
    }
    // (2.1) if pattern has *...
    for (auto elem: star_info) { 
        int ast_ind = elem.first; 
        char ast_bef = elem.second[0]; 
        char ast_aft = elem.second[1];
        vector<int> inds; 
        int i = 0; 
        for (i = 0; i < input.length()-1; i++) { 
            if (input[i] == ast_bef && input[i+1] == ast_aft) {
                inds.push_back(i);
                break;
            }
        }
        if (inds.size() > 1) {
            // delete ast_aft
            input.erase(inds[0],1);

            // delete ast_bef
            while (input[i] == ast_bef) { 
                input.erase(inds[0]-1,1);
            }  
        }
    }   
    // (2.2) if pattern has no *, then traverse through input normally
    if (pattern.length() != input.length()) 
        return false;
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i] == '.')
            continue; 
        if (pattern[i] != input[i])
            return false; 
    }
    return true; 
}

int main() {
    cout << isMatch("A", "A") << endl;
    cout << isMatch("A*B", "AB") << endl;
    return 0;
}
