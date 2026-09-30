class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int n=matrix.size();
     int m=matrix[0].size();
      vector<vector<int>>ans(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        // cout<<endl;
      }
      for(int i=0;i<n;i++){
        int j=0,k=m-1;
        while(j<k){
            swap(matrix[i][j],matrix[i][k]);
            j++;
            k--;
        }
      }
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         matrix[i][j]=ans[i][j];
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    }
};
