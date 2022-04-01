int main(){
    //Company: Michael's
    //Interviewer: Jiayong Lin
    //Round 2

    // Test Case
    vector<int> arr = {4,2,1,3};
    vector<int> arr = {3,8,-10,23,19,-4,-14,27};
    
    // Solution 
    int n = arr.size(); 
    int min_diff = abs(arr[1]-arr[0]);
    sort(arr.begin(), arr.end()); // O[nlog(n)]
    
    
    for (int i = 1; i < n; i++) { 
        int curr_diff = abs(arr[i] - arr[i-1]); 
        min_diff = min(min_diff, curr_diff);
    } // O[n]
    
    vector<vector<int>> result; 
    for (int i = 1; i < n; i++) { 
        if (abs(arr[i] - arr[i-1]) == min_diff) { 
         vector<int> temp = {arr[i-1],arr[i]};   
         result.push_back(temp);
        }
    }// O(n)
    
    //Output Solution
    for (int i = 0; i < result.size(); i++) { 
        vector<int> curr = result[i];
        cout << curr[0] << " " << curr[1] << endl; 
    } //O[n]

    return 0; 
}