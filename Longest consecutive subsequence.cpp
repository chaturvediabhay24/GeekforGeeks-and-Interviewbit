#define ll long long
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  sort(arr,arr+n);
  ll int c=1,maxi=INT_MIN;
  if(n==1){
      return n;
  }
  for(ll int i=1;i<n;i++){
      if(arr[i]-arr[i-1]==1)c++;
      else c=1;
      maxi=max(maxi,c);
  }
  return maxi;
}
