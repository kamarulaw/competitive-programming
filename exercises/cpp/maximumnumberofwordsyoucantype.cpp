class Solution {
public:
  vector<string> words(string s) { 
    int i = 0; 
    int n = s.length(); 
    string temp = "";
    vector<string> result; 
    while (i < n) { 
      if (s[i] == ' ') { 
        result.push_back(temp); 
        temp = "";
      } else { 
        temp += s[i];
      }
      i++; 
    }
    result.push_back(temp);
    return result; 
  }
  
  int canBeTypedWords(string text, string brokenLetters) {
    int numwords = 0; 
    set<char> chars; 
    for (int i = 0; i < brokenLetters.length(); i++) 
      chars.insert(brokenLetters[i]);      
    vector<string> strings = words(text);
    for (int i = 0; i < strings.size(); i++) { 
      string word = strings[i];
      bool works = true; 
      for (int i = 0; i < word.length(); i++) { 
        if (chars.count(word[i]) == 1)
          works = false; 
      }
      if (works == true)
        numwords++;
    }
    return numwords; 
  }
};