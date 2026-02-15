class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto a:row){
            for(int k=0;k<c;k++){
                mat[a][k]=0;
            }
        }
        for(auto a:col){
            for(int k=0;k<r;k++){
                mat[k][a]=0;
            }
        }
    }
};
