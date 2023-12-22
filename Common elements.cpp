class Solution
{
    public: 
    
        void increment( int arr[], int& i, int n){
            // int n=arr.size();
            
            i++;
            while(i<n && arr[i]==arr[i-1]){
                i++;
            }
            
            return;
        } 
        
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0, j=0, k=0;
            vector<int>ans;
            
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && A[i]==C[k]){
                    ans.push_back(A[i]);
                    
                    increment(A,i, n1);
                    increment(B,j, n2);
                    increment(C,k, n3);
                }
                
                else if(A[i]<=B[j] && A[i]<=C[k]){
                    increment(A,i, n1);
                }
                
                else if(B[j]<=A[i] && B[j]<=C[k]){
                    increment(B,j, n2);
                }
                
                else if(C[k]<=A[i] && C[k]<=B[j]){
                    increment(C,k, n3);
                }
            }
            
            return ans;
            
        }

};
