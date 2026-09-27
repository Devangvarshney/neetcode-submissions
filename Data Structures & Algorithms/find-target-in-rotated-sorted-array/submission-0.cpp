class Solution {
public:
int minimim_index(vector<int>& nums ){
    int l=0;
    int r=nums.size()-1;
     while(l<r){
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[r]){
            l=mid+1;
        }
        else{
            r=mid;
        }
     }
     return l;
}
int bs(vector<int>& nums,int l,int r,int target){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if (nums[mid]<target){
             l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivot=minimim_index(nums);
        int n=nums.size();
       int val= bs(nums,0,pivot-1,target);
      
       if(val!=-1){
        return val;
}
else{
 return  bs(nums,pivot,n-1,target); 
}
        
        
       
    }
};
