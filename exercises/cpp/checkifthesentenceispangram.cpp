#include <algorithm>
#include <string>

class Solution {
public:
    bool checkIfPangram(string sentence) {
      transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
      map<char, int> m; 
      for (int i = 0; i < sentence.length(); i++) { 
        if (isalpha(sentence[i])) { 
          m[sentence[i]]++; 
        }
      }
      if (m.size() == 26)
        return true; 
      else
        return false; 
    }
};