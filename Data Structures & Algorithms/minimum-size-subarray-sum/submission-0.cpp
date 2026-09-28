class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int i=0;
        int j=0;
        int sum=0;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
           
            int len=0;
            while(sum>=target){
                  
                len=j-i+1;
                  minlen=min(minlen,len);
            sum-=nums[i];
                i++;
              
            }
             j++;  
           

        }
        return minlen==INT_MAX?0:minlen;
    }
};