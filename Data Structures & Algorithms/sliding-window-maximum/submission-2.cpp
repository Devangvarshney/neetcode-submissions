class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // we need to remove how we find it
        // if we are working with maxheap and pick the top of heap then how do we find that which value should remove 
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        int n=nums.size();
           int i=0;
           int j=k-1;
           while(j<n){
           
             while(!pq.empty() && pq.top().second<i){
                pq.pop();
             }
                ans.push_back(pq.top().first);
              i++;
              j++;
             
              if(j<n){
                  pq.push({nums[j],j});
             
              }
             
           }
           return ans;
    }
};
