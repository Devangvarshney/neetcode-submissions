class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int n=matrix.size();
     int m=matrix[0].size();
      vector<vector<int>>ans(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=matrix[j][i];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }
      for(int i=0;i<n;i++){
        int j=0,k=m-1;
        while(j<k){
            swap(ans[i][j],ans[i][k]);
            j++;
            k--;
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]=ans[i][j];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }
    }
};
