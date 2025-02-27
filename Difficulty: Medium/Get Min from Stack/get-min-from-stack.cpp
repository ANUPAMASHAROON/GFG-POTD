//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  stack<pair<int,int>> st;
  int mini=INT_MAX;
  
    Solution() {
       
    }

    // Add an element to the top of Stack
    void push(int x) {
        mini = min(mini,x);
       st.push({x,mini});
    }

    // Remove the top element from the Stack
    void pop() {
       
      if (st.empty()) return;
      if(mini == st.top().second){
          st.pop();
          mini = st.empty() ? INT_MAX : st.top().second;
      }else{
          st.pop();
      }
      
    }

    // Returns top element of the Stack
    int peek() {
       return st.empty() ?  -1 :  st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        
      return st.empty() ?  -1 :  st.top().second;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends