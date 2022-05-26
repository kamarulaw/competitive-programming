class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int value = 0; 
      for (int i = 0; i < operations.size(); i++) { 
        string op = operations[i]; 
        for (int j = 0; j < 3; j++) { 
          if (op[j] == 'X') 
            continue;
          else if (op[j] == '-') {
            value--; 
            break;
          } else {
            value++; 
            break;
          }
        }
      }
      return value; 
    }
};