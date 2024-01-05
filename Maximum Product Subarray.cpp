//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    long long x=1, y=1, ans=INT_MIN;
	    for(int i=0;i<=n-1;i++){
	        if(x==0) x=1;
	        x=x*arr[i];
	        ans=max(ans, x);
	    }
	    
	    for(int i=n-1;i>=0;i--){
	        if(y==0) y=1;
	        y=y*arr[i];
	        ans=max(ans, y);
	    }
	    
	    return ans;
	}
};
