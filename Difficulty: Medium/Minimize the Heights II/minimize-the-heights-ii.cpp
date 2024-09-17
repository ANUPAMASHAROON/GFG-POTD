//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1]-arr[0];
        int st=arr[0]+k;
        int fi=arr[arr.size()-1]-k;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-k<0)continue;
            int s=min(st,arr[i]-k);
            int f=max(fi,arr[i-1]+k);
            if(f-s>=0)ans=min(ans,f-s);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends