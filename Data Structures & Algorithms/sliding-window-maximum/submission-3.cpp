class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        int i=0,j=k-1;
        int n=nums.size();
        while(j<n){
            while(!pq.empty() && pq.top().second<i){
               pq.pop();
            }
            ans.push_back(pq.top().first);
            j++;
            i++;
            if(j<n){
                pq.push({nums[j],j});
            }
        }
        return ans;
    }
};
