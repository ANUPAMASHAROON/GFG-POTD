class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        int n=a.size();
        int m=b.size();
        int cnt=0;
        unordered_map<int, bool> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=true;
        }
        for(int i=0;i<m;i++){
            if(mp.find(b[i])!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};