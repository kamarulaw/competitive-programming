#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    string s; 
    cin >> s; 
    int n = s.length(); 
    unordered_map<char, vector<int>> umap;
    
    for (int i = 0; i < n; i++) { 
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o') 
            umap[s[i]].push_back(i);
    }
    if (umap.size() != 4 || umap['l'].size() < 2) {
        cout << "NO";
        return 0;
    }
    
    int hi=0, ei=0, l1i=0, l2i=0, oi=0; 
    hi = umap['h'].at(0); 
    for (auto i = umap['e'].begin(); i != umap['e'].end(); i++) { 
        if (*i > hi) { 
            ei = *i; 
            break; 
        }
    }
    for (auto i = umap['l'].begin(); i != umap['l'].end(); i++) { 
        if (*i > ei) { 
            l1i = *i; 
            break; 
        }
    }
    for (auto i = umap['l'].begin(); i != umap['l'].end(); i++) { 
        if (*i > l1i) { 
            l2i = *i; 
            break;
        }
    }
    oi = umap['o'].at(umap['o'].size()-1);
    if (hi < ei && ei < l1i && l1i < l2i && l2i < oi)
        cout << "YES"; 
    else 
        cout << "NO"; 
    return 0; 
}
