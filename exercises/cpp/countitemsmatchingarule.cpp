class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int nmatch = 0; 
      vector<string> temp; 
      string type, color, name; 
      for (int i = 0; i < items.size(); i++) { 
        temp = items[i];
        type = temp[0];
        color = temp[1];
        name = temp[2];
        if ((ruleKey == "type" && ruleValue == type) || (ruleKey == "color" && ruleValue == color) || (ruleKey == "name" && ruleValue == name))
          nmatch++; 
      }
      return nmatch; 
    }
};