bool func(string a, string b){
    return a+b>b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> a;
    for(auto x:A){
        a.push_back(to_string(x));
    }
    sort(a.begin(),a.end(), func);
    string s="";
    int i=0;
    while(i<a.size() and a[i]=="0"){
        i++;
    }
    for(;i<a.size();i++){
        s+=a[i];
    }
    if(s==""){
        s="0";
    }
    return s;
}
