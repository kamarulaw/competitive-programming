class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
      int gr = 0; 
      int ls = min(rectangles[0][0], rectangles[0][1]);
      for (int i = 1; i < rectangles.size(); i++) 
        ls = max(ls, min(rectangles[i][0], rectangles[i][1]));
      for (int i = 0; i < rectangles.size(); i++) { 
        if ((ls <= rectangles[i][0]) && (ls <= rectangles[i][1]))
          gr++;
      }
      return gr; 
    }
};