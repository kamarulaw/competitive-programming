class Solution {
public:
  static bool comp(vector<int> a, vector<int> b) { 
    return a[1] >= b[1];
  }
  
  int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    int mu = 0; 
    sort(boxTypes.begin(), boxTypes.end(), comp);

    int idx = 0; 
    int boxes = 0; 
    while (idx < boxTypes.size() && boxes < truckSize) { 
      vector<int> box = boxTypes[idx];
      int numboxes = box[0];
      int numunits = box[1];
      int bused = 0; 
      while (boxes < truckSize && numboxes > 0) { 
        bused++;
        boxes++; 
        numboxes--; 
      }
      int units = bused * numunits; 
      mu += units; 
      idx++;
    }
    return mu; 
  }
};