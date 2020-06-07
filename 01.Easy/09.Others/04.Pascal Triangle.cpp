class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> triangle;
        
        if(n>=1){
            triangle.push_back({1});
        }
        if(n>=2){
            triangle.push_back({1,1});
        }
        for(int i=3;i<=n;i++){
            int current_size = 3;
            vector<int> temp;
            temp.push_back(1);
            for(int j=0;j<triangle[i-2].size() - 1;j++){
                int x = triangle[i-2][j] + triangle[i-2][j+1];
                temp.push_back(x);
            }
            temp.push_back(1);
            triangle.push_back(temp);
        }
        return triangle;
    }
};
