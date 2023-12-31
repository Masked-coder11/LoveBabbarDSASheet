class Solution {
public:
    void multiply(vector<int>& v, int mul ){
        int n=v.size();
        int carry=0;
        for(int i=0;i<n;i++){
            v[i]=v[i]*mul + carry;
            carry = v[i]/10;
            v[i]=v[i]%10;
        }
        while(carry){
            v.push_back(carry%10);
            carry= carry/10;
        }
        return;
    }

    vector<int> factorial(int N){
        // code here
        vector<int>v={1};
        for(int i=2;i<=N;i++){
            multiply(v, i);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
