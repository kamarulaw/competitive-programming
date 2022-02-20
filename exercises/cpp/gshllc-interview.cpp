#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <string>

using namespace std; 

vector<vector<string>> result; 

void returnItinerary (vector<vector<string>> itins) { 
    vector<string> temp;
    set<string> starts; // stores all starting locations
    set<string> ends; // stores all terminal locations
    for (int i = 0; i < itins.size(); i++) {
      temp = itins[i];
      starts.insaert(temp[0]);
      ends.insert(temp[1]);
    }
    
    string src = ""; 
    string dst = ""; 
    vector<string> start; 
    vector<string> end;
    map<string, string> m;
    for (int i = 0; i < itins.size(); i++) { 
      temp = itins[i];
      src = temp[0];
      dst = temp[1];
      if (starts.count(src) == 1 && ends.count(src) == 0)
        start = itins[i];
      if (ends.count(dst) == 1 && starts.count(dst) == 0) 
        end = itins[i];
        
      m[src] = dst; 
    }

    int idx = 0; 
    vector<string> res;
    string newstart = start[0];
    while (idx <= itins.size())  {
      res.push_back(newstart);
      newstart = m[newstart];
      idx++; 
    }
    
    int n = res.size(); 
    for (int i = 0; i < n / 2; i++) { 
      string itemp = res[n-1-i];
      res[n-1-i] = res[i]; 
      res[i] = itemp; 
    }
    
    for (int i = 0; i < res.size()-1; i++) { 
      vector<string> newtemp = {res[i], res[i+1]};
      result.push_back(newtemp);
    }
}

int main() {
    // define input
    vector<vector<string>> input = {{"JFK", "GA"},{"LAX", "BWI"},{"GA", "MIA"},{"BWI", "JFK"}};

    //run function
    returnItinerary(input);
    
    //see output
    for (int i = 0; i < result.size(); i++) 
      cout << result[i][0] << " " << result[i][1] << endl;
    return 0;
}
