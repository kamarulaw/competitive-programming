class Solution {
public:
    double average(vector<int>& salary) {
      sort(salary.begin(), salary.end());
      int n = salary.size(); 
      int num = 0;
      for (int i = 1; i < n-1; i++) 
        num += salary[i];
      double avg = num / ((n-2)*1.0);
      return avg; 
    }
};