class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
      map<int, int> tm; 
      map<int, int> am; 
      if (arr.size() != target.size()) 
        return false; 
      for (int i = 0; i < target.size(); i++) {
        am[arr[i]]++;
        tm[target[i]]++;  
      }
      for (auto it: tm) { 
        if (am.count(it.first) == 0)
          return false; 
        else  
          if (am[it.first] != tm[it.first])
            return false; 
      }
      return true; 
    }
};