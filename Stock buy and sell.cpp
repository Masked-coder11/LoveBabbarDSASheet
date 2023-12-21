class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int>>overlapping(vector<vector<int>>&intervals, int n){
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            int x=ans.size();
            
            int old_left=ans[x-1][0];
            int old_right=ans[x-1][1];
            
            int new_left=intervals[i][0];
            int new_right=intervals[i][1];
            
            if(new_left<=old_right){
                ans.pop_back();
                ans.push_back({old_left, new_right});
            }
            else{
                ans.push_back({new_left, new_right});
            }
        
        }
        
        return ans;
    }
    
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>ans;
        
        for(int i=0;i<=n-2; i++){
            if(A[i+1] > A[i]){
                ans.push_back({i, i+1});
            }
        }
    
        int x=ans.size();
        if(x==0){
            return ans;
        }
        ans=overlapping(ans, x);
        
        return ans;
    }
};
