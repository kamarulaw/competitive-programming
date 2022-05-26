class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int maxwords = 1; 
      for (int i = 0; i < sentences.size(); i++) { 
        int numwords = 1; 
        string sentence = sentences[i];
        for (int j = 0; j < sentence.length(); j++) {
          if (sentence[j] == ' ') {
            numwords++; 
          }
        }
        maxwords = max(numwords, maxwords);
      }
      return maxwords; 
    }
};