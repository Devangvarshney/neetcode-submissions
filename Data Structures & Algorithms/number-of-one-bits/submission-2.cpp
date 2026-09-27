class Solution {
public:
// string convertintobinary(uint32_t n){
//     string res="";
//     while(n!=0){
//         int rem=n%2;
//         res+=to_string(rem);
//         n=n/2;
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }
    int hammingWeight(uint32_t n) {
     
       int cnt=0;
       while(n!=0){
          n=n&(n-1);
          cnt++;
       }
      return cnt;
    }
};
