class MinStack{
public:
    /** initialize your data structure here. */
    vector<int> s;
    int min = INT_MAX;
    MinStack(){
        
    }
    
    void push(int x){
        if(s.empty()){
            min = x;
        }
        else if(x<min){
            min = x;
        }
        s.push_back(x);
    }
    
    void pop(){
        if(s.back()==min){
            s.pop_back();
            min = *min_element(s.begin(),s.end());
        }
        else{
            s.pop_back();
        }
    }
    
    int top(){
        return s.back();
    }
    
    int getMin(){
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
