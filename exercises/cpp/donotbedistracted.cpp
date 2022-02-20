#include <set>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int n,t; 
string s; 
int main(){
  cin >> t;
  for (int i = 0; i < t; i++) { 
    cin >> n; 
    cin >> s; 
    string ns = ""; 
    string lcs = ""; 
    set<char> st; 
    for (int j = 0; j < s.length(); j++) {
      char c = tolower(s[j]);
      lcs.push_back(c);
      st.insert(c); 
    }
    char c = lcs[0];
    int ind = 1; 
    char nc; 
    ns.push_back(c);
    while (ind < lcs.length()) { 
      nc = lcs[ind];
      if (c != nc) {
        ns.push_back(nc);
        c = nc; 
      }
      ind++; 
    }
    if (st.size() == ns.length()) 
      cout << "YES" << endl; 
    else 
      cout << "NO" << endl; 
    st.clear(); 
    ns.clear(); 
    lcs.clear(); 
  }
  return 0;
}