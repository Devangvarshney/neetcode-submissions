class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int i=nums.size()-1;
        vector<int>ans;
        int carry=1;
        while(i>=0){
            int sum=nums[i]+carry;
            cout<<sum<<" ";
            if  (sum>9){
   carry=sum%9;
   ans.push_back(0);
   }
   else{
    ans.push_back(sum);
    carry=0;
   } 
   i--;       
   }
   if(carry==1){
    ans.push_back(1);
   }

   reverse(ans.begin(),ans.end());
   return ans;
    }
};
