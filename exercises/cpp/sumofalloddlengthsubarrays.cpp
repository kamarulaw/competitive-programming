class Solution {
public:
    int oddlengthhelper(vector<int>& arr, int onum) { 
      int sum = 0; 
      int n = arr.size(); 
      for (int i = 0; i < n; i++) { 
        int j = 0; 
        vector<int> temp;
        while (j < onum && i+j < n && temp.size() < onum) { 
          temp.push_back(arr[i+j]); 
          j++;
        }
        if (temp.size() == onum) 
          for (int k = 0; k < onum; k++) 
            sum += temp[k];
      }
      return sum; 
    }
  
    int sumOddLengthSubarrays(vector<int>& arr) {
      int csum = 0; 
      int len = arr.size(); 
      if (len % 2 == 0) 
        len--;
      vector<int> odds; 
      for (int i = 1; i <= len; i++) 
        if (i % 2 == 1)
          odds.push_back(i);
      for (int i = 0; i < odds.size(); i++) { 
        int val = odds[i];
        csum += oddlengthhelper(arr, val);
      }
      return csum; 
    }
  
};