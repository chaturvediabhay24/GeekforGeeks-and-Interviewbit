string Solution::simplifyPath(string A) {
    string s="";
    stack<string> st;
    for(int i=0;i<A.size();i++){
        if(A[i]=='/'){
            if(s==".."){
                if(st.size()==0){
                    s="";
                    continue;
                }
                s="";
                st.pop();
                continue;
            }
            if(s=="."){
                s="";
                continue;
            }
            st.push(s);
            s="";
        }else{
            s+=A[i];
        }
    }
    if(s.size()){
            if(s==".." and st.size()){
                s="";
                st.pop();
            }
            else if(s=="."){
                s="";
                
            }
            else{
            st.push(s);
            s="";
                
            }
        
    }
    stack<string> stt;
    while(st.size()){
        if(st.top()==""){
            st.pop();
            continue;
        }
        stt.push(st.top());
        st.pop();
    }
    s="";
    while(stt.size()){
        if(stt.top()==""){
            stt.pop();
            continue;
        }
        s+="/";
        s+=stt.top();
        stt.pop();
    }
    if(s==""){
        return "/";
    }
    return s;
    
}

