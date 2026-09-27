class Solution {
public:
string convertintobinary(uint32_t n){
    string res="";
    while(n!=0){
        int rem=n%2;
        res+=to_string(rem);
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
    int hammingWeight(uint32_t n) {
       string s= convertintobinary(n);
       int cnt=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cnt++;
        }
       } 
      return cnt;
    }
};
