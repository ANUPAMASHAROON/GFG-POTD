//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()==1)return {};
        vector<int>ans;
        int s =0;
        int e=arr.size()-1;
        sort(arr.begin(),arr.end());
        if(target<=arr[0]){
            return {arr[0],arr[1]};
            
        }
      
        else{
        int difffromtarget=abs(target-(arr[e]+arr[s]));
        int pota=arr[s];
        int potb=arr[e];
        while(s<e){
            int tempdiff=abs(target - (arr[e]+arr[s]));
            if(tempdiff<difffromtarget){
                pota=arr[s];
                potb=arr[e];
                difffromtarget=tempdiff;
                
            }else if(tempdiff==difffromtarget){
                int differncebwpota_potb=abs(pota-potb);
                if (differncebwpota_potb<abs(arr[s]-arr[e])){
                    pota=arr[s];
                    potb=arr[e];
                }
            }
            
            if(arr[s]+arr[e]>target){
                e--;
            }
            else if(arr[s]+arr[e]<target){
                s++;
            }
            else{
                return {arr[s],arr[e]};
            }
            
        }
        ans.push_back(pota);
        ans.push_back(potb);
        return ans ;    
        }
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends