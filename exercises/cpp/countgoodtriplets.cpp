class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
      int ng = 0; 
      for (int i = 0; i < arr.size(); i++) { 
        int one, two, three; 
        for (int j = i+1; j < arr.size(); j++) { 
          for (int k = j+1; k < arr.size(); k++) { 
            one = arr[i];
            two = arr[j]; 
            three = arr[k];
            if ((abs(one - two) <= a) && (abs(two - three) <= b) && (abs(one - three) <= c))
              ng++;
          }
        }
      }
      return ng; 
    }
};