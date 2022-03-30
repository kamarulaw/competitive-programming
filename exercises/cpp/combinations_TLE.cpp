class Solution {
public:
    vector<vector<int>> seqs; 
    void generatess(vector<int> arr, int i, int n, int k, vector<int> seq) {
      if (i==n || seq.size() > k) { 
        if (seq.size() == k)
          seqs.push_back(seq);
        return; 
      }
      generatess(arr,i+1,n,k,seq);
      seq.push_back(arr[i]);
      generatess(arr,i+1,n,k,seq);
    }
  
    vector<vector<int>> combine(int n, int k) {
      vector<int> arr; 
      vector<int> seq; 
      for (int i = 1; i <= n; i++) 
        arr.push_back(i);
      generatess(arr,0,n,k,seq);
      return seqs; 
    }
};