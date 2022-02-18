class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      string word = "";
      int nwords = words.size(); 
      int nletters = 26; 
      int counts[nwords][nletters]; 
      for (int i = 0; i < nwords; i++) { 
        for (int j = 0; j < nletters; j++) {
          counts[i][j] = 0; 
        }
      }
      vector<string> result; 
      for (int i = 0; i < nwords; i++) { 
        word = words[i]; 
        for (int j = 0; j < word.length(); j++) { 
          counts[i][(int)word[j] - 97]++; 
        }
      }
      string exword = words[0];
      map<char, int> m; 
      for (int i = 0; i < exword.length(); i++) {
        char ch = exword[i]; 
        m[ch]++;
      }
      
      for (int j = 0; j < nletters; j++) { 
        bool allsame = true; 
        int min_ = 0;
        for (int i = 0; i < nwords; i++) { 
          if (counts[i][j] != m[static_cast<char>(j + 97)]) { 
            allsame = false; 
            break; 
          }
        }
        if (allsame == true && m[static_cast<char>(j+97)] > 0) { 
          for (int i = 0; i < m[static_cast<char>(j+97)]; i++) { 
            string schar = string(1, static_cast<char>(j + 97));
            result.push_back(schar); 
          }
        }
      }
      return result; 
    }
};