class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        
        int i=N-2;
        while(i>=0){
            if(arr[i] < arr[i+1]){
                break;
            }
            i--;
        }
        
        if(i==-1){
            //last permutation in hand
            
            reverse(arr.begin(), arr.end());
            return arr;
        }
        
        int j=N-1;
        
        while(j>i){
            if(arr[i]<arr[j]){
                break;
            }
            j--;
        }
        
        
        //i->  the breakpoint
        //j-> the next permutation hero
        
        swap(arr[i], arr[j]);
        
        //reverse from i+1 to end
        
        reverse(arr.begin()+i+1, arr.end());
        
        return arr;
    }
};
