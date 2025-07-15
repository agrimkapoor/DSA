//vivek loves array
#include<iostream>
using namespace std;
int rangesum(int *a,int l,int r){//sum of ele from index L to R
int sum=0;
for(int i=l;i<=r;i++){
	sum+=a[i];
}
return sum;
}
int solve(int *a,int l,int r){
	//1.base case
	if(l>=r)return 0;
	//2.recursive case

	int indx=-1;
	for(int i=l;i<=r;i++){// loop from L to R
		int sumleft=rangesum(a,l,i);
		int sumright=rangesum(a,i+1,r);
		if(sumleft==sumright){
			indx=i;
			break;
		}
	}
	if(indx==-1){// nhi mila koi index
	return 0;

	}
	return 1+max(solve(a,l,indx),solve(a,indx+1,r));

}
int main() {

	int t;
	cin>>t;

	while(t--){//post decrement 
	   int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,0,n-1)<<endl;
		delete[]a;// jab while loop waapis chalega toh memory leak na ho

	}
	return 0;
}