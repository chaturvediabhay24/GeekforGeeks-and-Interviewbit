vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for(auto x:A){
        while(st.top()>=x){
            st.pop();
        }
        ans.push_back(st.top());
        st.push(x);
    }
    return ans;
}

