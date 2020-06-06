class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        if(v.size()==0){
            return 0;
        }
        vector<int>::iterator it;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]==v[i]){
                it = v.begin() + i;
                cout<<*it<<endl;
                v.erase(it);
                i--;
            }
        }
        return v.size();
    }
};
