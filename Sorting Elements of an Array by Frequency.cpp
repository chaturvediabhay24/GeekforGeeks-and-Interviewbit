#define ll long long
void sortByFreq(int arr[],int n)
{
    unordered_map<ll int, ll int> m;
    for(ll int i=0;i<n;i++)m[arr[i]]++;
    vector<pair<ll int, ll int> > v;
    unordered_map<ll int, ll int> ::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        pair<ll int, ll int> p;
        p.first=-itr->second;
        p.second=itr->first;
        v.push_back(p);
    }
        sort(v.begin(),v.end());
        for(ll int i=0;i<v.size();i++){
            for(ll int j=0;j<-v[i].first;j++){
                cout<<v[i].second<<" ";
            }
        }
}
