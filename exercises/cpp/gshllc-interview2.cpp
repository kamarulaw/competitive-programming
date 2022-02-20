#include <iostream>
#include <string>
#include <map>

using namespace std;

string recPart(int a, int b) {
    string res;
    map<int, int> mp;
    mp.clear();
    
    int rem = a % b;
    while ((rem != 0) && (mp.find(rem) == mp.end())) {
        mp[rem] = res.length();
        rem = rem * 10;
        int res_part = rem / b;
        res += to_string(res_part);
        rem = rem % b;
    }
    return (rem == 0) ? "" : res.substr(mp[rem]);
}

string trimString(string str) {
  for(int s = str.length()-1; s>0; s--) {
    if(str[s] == '0') 
      str.erase(s,1);
    else 
      break;
  }
  return str;
}

string divide(int a, int b) { 
  if (a == 0) 
    return to_string(0);
    
  string res = "";
  int wp = a / b; 
  res += to_string(wp);
  string rp = recPart(a,b);
  if (rp == "") {
    if (a % b == 0) { 
      return res;
    } else { 
      return trimString(to_string(float(a)/b)); 
    }
  } else { 
    res += ".";
    res += rp; 
    res += "^";
  }
  return res; 
}

int main() {
  cout << divide(10, 3) << endl;
  cout << divide(10, 6) << endl;
  cout << divide(50, 4) << endl;
  cout << divide(50, 22) << endl;
  cout << divide(51, 8) << endl;
  return 0;
}