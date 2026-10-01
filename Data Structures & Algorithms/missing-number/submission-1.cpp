class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int xori=0;
    int n=nums.size();
     for(int i=0;i<n;i++){
     xori^=nums[i];
     }
     int xori1=0;
     for(int i=0;i<=n;i++){
     xori1^=i;
     }
     cout<<xori1<<" "<<xori;
     return xori1^xori;
    }
};
