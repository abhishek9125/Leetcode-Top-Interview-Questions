class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int count = 0;
        int n = v.size();
        for(int i=0;i<v.size();){
            if(v[i]==0){
                v.erase(v.begin()+i);
                count++;
            }else{
                i++;
            }
        }
        for(int i=n-count;i<n;i++){
            v.insert(v.begin()+i,0);
        }
    }
};
