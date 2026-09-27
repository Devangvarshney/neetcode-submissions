class Solution {
public:
bool ispossible(vector<int>& piles, int b, int target) {
    int time = 0;

    for(int i = 0; i < piles.size(); i++) {
        time += ceil((double)piles[i] / b);

        if(time > target) {
            return false;
        }
    }

    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
       int r = *max_element(piles.begin(), piles.end());
        int ans=0;
        while(l<=r){
           int mid=l+(r-l)/2;
           if(ispossible(piles,mid,h)){
            ans=mid;
            r=mid-1;
           }
           else{
            l=mid+1;
           }
        }
        return ans;
    }
};
