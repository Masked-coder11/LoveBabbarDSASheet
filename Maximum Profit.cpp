int dp[501][201][2];

class Solution {
  public:
    int func(int ind, int N, int K, int A[], int mode){
        if(ind >= N){
            return 0;
        }
        if(K==0){
            return 0;
        }
        if(dp[ind][K][mode]!=-1){
            return dp[ind][K][mode];
        }
        
        if(mode == 0){
            //buying mode
            
            //option 1-> skip
            int skip = func(ind+1, N, K, A, mode);
            
            //option 2-> buying
            int buy = func(ind+1, N, K, A, 1) - A[ind];
            
            return dp[ind][K][mode] = max(skip, buy);
        }
        else{
            //selling mode
            
            //option 1-> skip
            int skip = func(ind+1, N, K, A, mode);
            
            //option 2-> selling
            int sell = func(ind+1, N, K-1, A, 0) + A[ind];
            
            return dp[ind][K][mode] = max(skip, sell);
            
        }
    }
  
    int maxProfit(int K, int N, int A[]) {
        // code here
        
        for(int i=0;i<=N;i++){
            for(int j=0;j<=K;j++){
                dp[i][j][0]=-1;
                dp[i][j][1]=-1;
            }
        }
        
        int ind=0, mode=0;
        
        int ans = func(ind,N, K, A, mode);
        
        return ans;
    }
};
