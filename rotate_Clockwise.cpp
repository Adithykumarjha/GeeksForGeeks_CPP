#include<bits/stdc++.h>
using namespace std;

void rotateclockwise(vector<int> &arr,int n,int k){
	n=arr.size();
	 k=k%n;
	int i,j;
	
	if(n==0)return;
	
	
	for(i=n-k,j<n-1;i<j;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	for(i=0,j<n-k-1;i<j;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	for(i=0,j=n-1;i<j;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	
		
	}
}

void print(const vector<int>&arr){
	for(int d:arr){
		cout<<d;
	}
}

int main(){
	vector<int>arr{2,1,4,5,7,8};
	int n=arr.size();
	int k=3;
	rotateclockwise(arr,n,k);
	print(arr);

	return 0;
}
