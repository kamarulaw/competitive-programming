#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std; 

int n, s; 
pair<int, int> temp; 
vector<pair<int, int>> dragons; 

bool myfunction(pair<int, int> x, pair<int, int> y) 
{
    return x.first < y.first; 
}

int main() 
{ 
    cin >> s; 
    cin >> n; 
    for (int i = 0; i < n; i++) { 
        cin >> temp.first; 
        cin >> temp.second; 
        dragons.push_back(temp);
    }
    sort(dragons.begin(), dragons.end(), myfunction); 
    
    for (pair p: dragons) { 
        if (s <= p.first) { 
            cout << "NO"; 
            return 0; 
        } else { 
            s += p.second; 
        }
    }
    cout << "YES"; 
    return 0; 
}



