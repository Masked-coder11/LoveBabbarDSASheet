class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_map<int,int>mp;
      for(int i=0;i<N;i++){
          mp[arr[i]]=1;
      }
      int ans=0;
      for(int i=0;i<N;i++){
          int curr=arr[i];
          int j=curr-1;
          int curr_ans=1;
          while(mp.find(j)!=mp.end()){
              j--;
              curr_ans++;
          }
          ans =max(ans, curr_ans);
      }
      return ans;
    }
};
