class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1) return 0;
        else if(arr[0]==0) return -1;
        
        int step=arr[0], maxi=0, jump=1;
        
        for(int i=1;i<n;i++){
            if(i==n-1) return jump;
            
            maxi=max(maxi, i+arr[i]);
            step--;
            
            if(step==0){
                jump++;
                if(i>=maxi) return -1;
                else{
                    step=maxi-i;
                }
            }
        }
        
        return -1;
        
    }
};
