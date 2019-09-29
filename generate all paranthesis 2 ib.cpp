vector<string > v;

void func(string s,int ca,int cb, int n){
    if(ca>n or cb>n) return ;
    if(cb>ca) return ;
    if(ca==cb and ca==n){
        v.push_back(s);
        return ;
    }
    func(s+'(',ca+1,cb,n);
    func(s+')',ca,cb+1,n);
    return;
}

vector<string> Solution::generateParenthesis(int A) {
    v.clear();
    func("",0,0,A);
    return v;
}

