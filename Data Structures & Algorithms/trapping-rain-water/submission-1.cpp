class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int leftmax=0;
        int rightmax=0;
        int sum=0;
        while(l<r){
            leftmax=max(leftmax,nums[l]);
            rightmax=max(rightmax,nums[r]);
            if(leftmax<rightmax){
                sum+=(leftmax-nums[l]);
                l++;
            }
            else{
                sum+=(rightmax-nums[r]);
                r--;
            }
        }
        return sum;
    }
};
