class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n=temperatures.size();
        vector<int>nge(n,-1);
         for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
            st.pop();
        }

        if (!st.empty()) {
            nge[i] = st.top();
        }

        st.push(i);
    }
        for(int i=0;i<nge.size();i++){
            if(nge[i]==-1){
                nge[i]=0;
            }
            else{
                nge[i]=nge[i]-i;
            }
        }
        return nge;
    }
};
