pair<long long, long long> getMinMax(long long a[], int n) {
    long long mini=a[0];
    long long maxi=a[0];
    
    for(int i=1;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
        
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    
    return {mini, maxi};
    
    
    
}
