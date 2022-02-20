#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n, t; 
    string s;
    cin >> n; 
    cin >> t; 
    cin >> s; 
    
    for (int i = 0; i < t; i++) { 
        int ind = 0; 
        while (ind < n - 1) { 
            if (s[ind] == 'B' && s[ind+1] == 'G') { 
                s[ind] = 'G'; 
                s[ind+1] = 'B';
                ind += 2;
            }
            else { 
                ind++; 
            }
        }
        
    }
    cout << s; 
    return 0; 
}
