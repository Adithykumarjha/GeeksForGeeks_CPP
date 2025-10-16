#include<bits/stdc++.h>

#define MAX 100

using namespace std;


void transpose(int arr[][MAX],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
}

// reversing rows

void rev(int arr[][MAX],int n){
	
	for(int i=0;i<n/2;i++){
		swap(arr[i],arr[n-i-1]);
	}	
}

void print(int arr[][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the size:"<<" ";
	cin>>n;
	int arr[MAX][MAX];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Normal:\n";
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nAfter Transpose and rotation:\n";
	
	for(int i=0;i<n;i++){
		rev(arr,n);
	}
	
	
	transpose(arr,n);
	print(arr,n);
	
	return 0;
}




