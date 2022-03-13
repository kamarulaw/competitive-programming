class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<vector<int>> rows; 
      vector<int> zr = {1};
      rows.push_back(zr);
      for (int i = 1; i <= rowIndex; i++) { 
        vector<int> newRow; // fan...MACROSS 82-99 - Fun Tonight
        vector<int> prevRow = rows[i-1]; 
        int newRowIndex = 0; 
        while (newRowIndex < prevRow.size()) { 
          if (newRowIndex == 0)
            newRow.push_back(1);
          else 
            newRow.push_back(prevRow[newRowIndex] + prevRow[newRowIndex-1]);
          newRowIndex++; 
        }
        newRow.push_back(1);
        rows.push_back(newRow);
      }
      return rows[rowIndex];
    }
};