#include<bits/stdc++.h>
using namespace std;

// Machine Learning Engineer @ Michaels
// Test Cases Accepted: 1, 2, 3, 4, 5
// Test Cases Time Limit Exceeded: 6, 8, 9, 10

vector<int> subsetUp(vector<int> A, int ind) {
    vector<int> newA; 
    for (int i = ind+1; i < A.size(); i++) { 
        newA.push_back(A[i]);
    }
    return newA; 
}

vector<int> subsetDown(vector<int> A, int ind) { 
    vector<int> newA; 
    for (int i = 0; i <= ind; i++) { 
        newA.push_back(A[i]);
    }
    return newA; 
}

int mex(vector<int> A) {
    int start = 0; 
    if (A.size() == 0) 
        return start; 
    sort(A.begin(), A.end()); 
    vector<int> newArr; 
    for (int i = 0; i < A.size(); i++) { 
        if (i == 0 || A[i] != newArr[newArr.size()-1])
            newArr.push_back(A[i]);
    }
    for (int i = 0; i < newArr.size(); i++) { 
        if (start != newArr[i]) { 
            return start; 
        }
        start++; 
    }
    return start; 
}

int equalMEX (int N, vector<int> A) {
    for (int i = 0; i < A.size(); i++) { 
        vector<int> s1 = subsetUp(A, i);
        vector<int> s2 = subsetDown(A, i);
        if (mex(s1) == mex(s2)) { 
            return i+1; 
        }
    }
    return -1; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = equalMEX(N, A);
        cout << out_;
        cout << "\n";
    }
}