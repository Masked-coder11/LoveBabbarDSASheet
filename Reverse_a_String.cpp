class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.length();
        
        for(int i=0;i<n/2;i++){
            char temp=str[i];
            str[i]=str[n-i-1];
            str[n-i-1]=temp;
        }
        
        return str;
    }
};
