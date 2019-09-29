#define ll long long int
int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ll l=0,r=A,x=A;
    int ans=0;
    while(l<=r){
        ll mid=r+(l-r)/2;
        if(mid*mid==A)return mid;
        if(mid*mid<A and (mid+1)*(mid+1)>A){
            return mid;
        }
        if(mid*mid<A){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}

