class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long low, long long mid, long long high){
        long long temp[high-low+1];
        long long int k=0;
        long long int i=low;
        long long int j=mid+1;
        long long int inv=0;
        
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                inv+= mid-i +1;
                temp[k++]=arr[j++];
            }
        }
        
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        
        while(j<=high){
            temp[k++]=arr[j++];
        }
        
        for(int x=low; x<=high; x++){
            arr[x]=temp[x-low];
        }
        
        return inv;
    }
    
    long long int mergeSort(long long arr[], long long int low, long long int high){
        if(low>=high) return 0;
        long long int inv=0;
        
        long long mid= (low+high)/2;
        
        inv += mergeSort(arr, low, mid);
        inv += mergeSort(arr, mid+1, high);
        inv += merge(arr, low, mid, high);
        
        return inv;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        long long int ans= mergeSort(arr, 0, N-1);
        
        return ans;
        
        
        
        
    }

};
