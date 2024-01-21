class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=A[i]+A[j]+A[k];
                if(sum==X) return true;
                else if(sum<X) j++;
                else if(sum>X) k--;
            }
        }
        return false;
    }

};
