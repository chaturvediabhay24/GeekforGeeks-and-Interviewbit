#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct person{
	string name;
	int age;
	int id;
}p;

int compare(const void* a, const void* b){
	return ((struct person*)a)->id < ((struct person*)b)->id;
}

int main(){
	person stu[5];
	for(ll int i=0;i<5;i++){
		stu[i].name="abhay";
		stu[i].id=i+1;
		stu[i].age=10-i;
	}
	for(ll int i=0;i<5;i++){
		cout<<stu[i].name<<" "<<stu[i].id<<" "<<stu[i].age<<endl;
	}
	qsort(stu,5,sizeof(person),compare);
	
	for(ll int i=0;i<5;i++){
		cout<<stu[i].name<<" "<<stu[i].id<<" "<<stu[i].age<<endl;
	}
	return 0;
}
