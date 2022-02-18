class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
      int mt = 0; 
      vector<int> p1, p2; 
      int x1, x2, y1, y2; 
      int xdiff, ydiff, jump1; 
      for (int i = 0; i < points.size()-1; i++) { 
        p1 = points[i];
        x1 = p1[0];
        y1 = p1[1];
        
        p2 = points[i+1];
        x2 = p2[0];
        y2 = p2[1];
        
        xdiff = abs(x1 - x2);
        ydiff = abs(y1 - y2);
        jump1 = min(xdiff, ydiff);
        if (jump1 == xdiff) { 
          if (x1 + xdiff == x2) { 
            x1 += xdiff; 
            y1 += xdiff; 
          } else { 
            x1 -= xdiff; 
            y1 -= xdiff; 
          }
          mt += jump1; 
          mt += abs(y2 - y1);
        } else { 
          if (y1 + ydiff == y2) { 
            x1 += ydiff; 
            y1 += ydiff;
          } else { 
            x1 -= ydiff; 
            y1 -= ydiff; 
          }
          mt += jump1; 
          mt += abs(x2-x1);
        }
      }
      return mt; 
    }
};