stack<int > st,temp;
MinStack::MinStack() {
    while(st.size()>0){
        st.pop();
        temp.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    if(temp.size()==0) {
        temp.push(x);
    }else{
        int val=temp.top();
        temp.push(min(val,x));
    }
}

void MinStack::pop() {
    if(temp.size()==0){
        return ;
    }
    st.pop();
    temp.pop();
}

int MinStack::top() {
    if(st.size()==0){
        return -1;
    }
    return st.top();
}

int MinStack::getMin() {
    if(temp.size()==0){
        return -1;
    }
    return temp.top();
}


