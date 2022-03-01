/*

Given a file with products and their prices, write a function that 
outputs all unique product pairs you can buy using exactly X $USD.

Format of the file:
<item>\t<price>

Example:
kush\t20
sauce\t160
cola\t149
quart\t51
mas\t180

Gift card amount: 200

Output: [("kush", "mas"), ("cola", "quart")]

*/
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std; 


bool cmp(string s1, string s2) { 
    if (s1.length() != s2.length()) 
        return false; 
    for (int i = 0; i < s1.length(); i++) { 
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true; 
}

vector<pair<string, string>> (vector<pair<string, int>> inputs, int amount){ 
    // Test case altered to protect comapny
    map<string, int> m; 
    vector<pair<string, string>> result; 
    
    for (auto elem: inputs)
        m[inputs.first] = inputs.second;
    
    for (auto elem1: m) { 
        for (auto elem2: m) { 
            if (cmp(elem1.first, elem2.first) == false && elem1.second + elem2.second == amount) { 
                result.push_back(make_pair(elem1.first, elem2.first));
            }
        }
    }
    return result; 
}
