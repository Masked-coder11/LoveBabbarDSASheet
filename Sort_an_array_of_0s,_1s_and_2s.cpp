class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        
        int czero=0, cone=0, ctwo=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0) czero++;
            else if(a[i]==1) cone++;
            else if(a[i]==2) ctwo++;
        }
        
        //time for 2nd traversal
        
        int i=0;
        while(czero>0){
            a[i]=0;
            czero--;
            i++;
        }
        
        while(cone>0){
            a[i]=1;
            cone--;
            i++;
        }
        
        while(ctwo>0){
            a[i]=2;
            ctwo--;
            i++;
        }
        
    }
    
};
