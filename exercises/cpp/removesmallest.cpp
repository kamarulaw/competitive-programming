#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std; 

int n, t, curr; 
vector<int> temp; 

int main() 
{ 
    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> t; 
        for (int j = 0; j < t; j++) { 
            cin >> curr;
            temp.push_back(curr);
        }
        sort(temp.begin(), temp.end());
        int s = temp.size(); 
        bool changeflag = false; 
        bool startflag = true; 
        while (startflag == true || changeflag == true) {
            startflag = false; 
            changeflag = false; 
            for (int k = 1; k < temp.size(); k++) { 
                if (temp[k] - temp[k-1] <= 1) {
                    int eraseindex = k-1; 
                    temp.erase(temp.begin()+eraseindex); 
                    changeflag = true;
                    break; 
                }
            }
        }
        if (temp.size() == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
        temp.clear(); 
    }
    return 0; 
}