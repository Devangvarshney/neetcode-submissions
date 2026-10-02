class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0,l=0,r=n-1;
        int maxans=0;
        while(l<=r){
            int ans=0;
            left=nums[l];
            right=nums[r];
          if(left<right){
            ans=min(left,right)*(r-l);
            maxans=max(maxans,ans);
            l++;
          }
          else{
             ans=min(left,right)*(r-l);
            maxans=max(maxans,ans);
            r--;
          }
          

        }
        return maxans;
    }
};
