class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftmax(n),rightmax(n);
        leftmax[0]=nums[0];
        for(int i=1;i<n;i++){
           leftmax[i]=max(leftmax[i-1],nums[i]);
        }
         rightmax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
           rightmax[i]=max(rightmax[i+1],nums[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            // cout<<leftmax[i]<<" " <<rightmax[i];
            // cout<<endl;
            sum+=abs(nums[i]-min(leftmax[i],rightmax[i]));
        }
        return sum;
    }
};
