#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int n, q, nshops=0; 
int temp; 
vector<int> xis; 
vector<int> mis; 

int main(){
  cin >> n; 
  for (int i = 0; i < n; i++) { 
    cin >> temp; 
    xis.push_back(temp);
  }
  sort(xis.begin(), xis.end());
  cin >> q; 
  for (int i = 0; i < q; i++) {
    cin >> temp; 
    mis.push_back(temp);
  }
  for (int i = 0; i < mis.size(); i++) { 
    int mi = mis[i];
    int fo = distance(xis.begin(), lower_bound(xis.begin(), xis.end(), mi));
    while (fo < xis.size() && xis[fo] == mi) { 
      fo++; 
    }
    cout << fo << endl; 
  }
  return 0;
}