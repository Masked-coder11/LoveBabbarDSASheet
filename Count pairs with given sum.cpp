class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map<int,int>mp;
        for(int i=0;i<n; i++){
            mp[arr[i]]++;
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            int req=k-arr[i];
            
            ans+=mp[req];
            
            if(req==arr[i]){
                ans--;
            }
            
        }
        
        return ans/2;
    }
};
