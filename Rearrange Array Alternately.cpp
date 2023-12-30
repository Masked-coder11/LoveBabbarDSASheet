class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	 long long divisor = arr[n-1]+1;
    	 int m=0, M=n-1;
    	 
    	 for(int i=0;i<n;i++){
    	     if(i%2==0){
    	         arr[i] = (arr[M--]%divisor)*divisor+arr[i];
    	     }
    	     else{
    	         arr[i] = (arr[m++]%divisor)*divisor + arr[i];
    	     }
    	 }
    	 
    	 for(int i=0;i<n;i++){
    	     arr[i] = arr[i]/divisor;
    	 }
    }
};
