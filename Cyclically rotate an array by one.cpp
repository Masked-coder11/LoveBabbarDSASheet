void rotate(int arr[], int n)
{
    
    int i=n-1;
    while(i!=0){
        int j=i-1;
        
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i=i-1;
    }
    
    return;
    
}
