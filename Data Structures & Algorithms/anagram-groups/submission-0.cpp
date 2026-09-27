class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
           
            string sorti=strs[i];
            sort(sorti.begin(),sorti.end());
            mp[sorti].push_back(strs[i]);

        }
        vector<vector<string>>ans;
        for(auto &it:mp){
           vector<string>res=it.second;
           ans.push_back(res);
        }
        return ans;
    }
};
