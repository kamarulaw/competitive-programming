#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >> s; 
    int n = s.length();
    unordered_map<char, int> umap; 
    
    for (int i = 0; i < n; i++) { 
        if (i % 2 == 0) 
            umap[s[i]]++; 
    }
    
    string result; 
    int ones = umap['1'];
    int twos = umap['2'];
    int threes = umap['3'];
    for (int i = 0; i < ones; i++) {
        result += "1+";
    }
    
    for (int i = 0; i < twos; i++) { 
        result += "2+";
    }
    
    for (int i = 0; i < threes; i++) { 
        result += "3+";
    }
    result.erase(result.size() - 1); 
    cout << result; 
    return 0; 
}
