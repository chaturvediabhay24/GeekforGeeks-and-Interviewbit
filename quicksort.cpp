#include<bits/stdc++.h>
using namespace std;
#define ll long long

swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int party(int a[], int l,int h){
	int pivot=a[h];
	int i=l-1;
	for(int j=l;j<=h-1;j++){
		if(a[j]<pivot){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return i+1;
}

void qs(int a[], int i, int j){
	if(i<j){
		int pi=party(a,i,j);
		qs(a,i,pi-1);
		qs(a,pi+1,j);
	}
}

int main(){
	int a[]={99,5467,23,2345,233,55,4,345,43,2345};
	qs(a,0,9);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
