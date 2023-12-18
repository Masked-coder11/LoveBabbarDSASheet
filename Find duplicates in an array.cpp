class Solution{
  public:
    vector<int> duplicates(long long a[], int n) {
        // code here
        
        for(int i=0;i<n;i++){
            a[i]++;
        }
        
        int count=0;
        set<int>s;
        vector<int>v;
        
        for(int i=0;i<n;i++){
            long long int ind= abs(a[i]);
            if(ind==n){
                count++;
            }
            else if(a[ind] < 0){
                s.insert(ind-1);
            }
            else{
                a[ind] = -a[ind];
            }
        }
        
        if(count>1){
            s.insert(n-1);
        }
        for(auto it:s){
            v.push_back(it);
        }
        
        if(v.size()==0){
            v.push_back(-1);
        }
        
        sort(v.begin(), v.end());
        
        return v;
    }
};
