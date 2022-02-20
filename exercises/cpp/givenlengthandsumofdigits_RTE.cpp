#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int m, s; 

int digitlen(int x){ 
    int len = 0; 
    while (x > 0) { 
        len++; 
        x/=10; 
    }
    return len; 
}

int main(){
    cin >> m >> s; 
    vector<int> digits; 
    int copym = m; 
    int copys = s; 
    string result; 
    bool mchanged = true;
    while (m > 0 && mchanged == true) {
        mchanged = false; 
        for (int i = 9; i >= 1; i--) { 
            mchanged = false; 
            if (s - i >= 0) {
                digits.push_back(i);
                s-=i; 
                m--; 
                mchanged = true; 
                break; 
            } 
        }
    }
    int sd = digits.size(); 
    if (sd == copym || sd > 0) {
        if (sd > 0 && sd != copym) { 
           for (int i = 1; i <= copym - sd; i++) 
                digits.push_back(0);
        }
        for (int d: digits) 
            result.append(to_string(d));
        unsigned long long int max_ = stoll(result);
        //code to find min w/ length m
        vector<string> permutations; 
        string temp = result; 
        do { 
            permutations.push_back(temp);
        } while (prev_permutation(temp.begin(), temp.end()));
        int min_ = max_; 
        for (int i = 0; i < permutations.size(); i++) { 
            if (digitlen(stoi(permutations[i])) == copym) { 
                min_ = stoi(permutations[i]); 
            }
        }
        cout << min_ << " " << max_; 
        
    } else { 
        cout << -1 << " " << -1; 
    }
    return 0;
}