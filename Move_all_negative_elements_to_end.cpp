class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>v;
        int start=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v.push_back(arr[i]);
            }
            
            else{
                arr[start]=arr[i];
                start++;
            }
        }
        
        for(int i=0;i<v.size();i++){
            arr[start]=v[i];
            start++;
        }
        
        return;
    }
};
