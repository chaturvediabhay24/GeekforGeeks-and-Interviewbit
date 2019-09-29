#define ll long long
long long int count2sinRangeAtDigit(long long int number, long long int d)
{
// Your code goes here
    ll int divi=pow(10,d);
    // cout<<divi<<" ";
    ll int rem=(number/divi)%10;
    ll int ans=rem*d*divi/10;
    if(rem<2){
        return ans;
    }else if(rem>2){
        return ans+divi;
    }else{
        return ans+1+(number%divi);
    }
}
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
// Your code goes here
    ll int count=0,n=number;
    while(n){
        count++;
        n=n/10;
    }
    ll int s=0;
    for(ll int i=0;i<count;i++){
        s+=count2sinRangeAtDigit(number,i);
    }
    return s;
}
