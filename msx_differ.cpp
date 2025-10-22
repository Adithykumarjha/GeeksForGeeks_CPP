#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(vector<int>arr){
	int n=arr.size();
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<=arr[j]){
				ans=max(ans,j-i);
			}
		}
	}
	
	return ans;
	
}


int main(){
	vector<int>arr={1,5,4,2,9,8,7};
	cout<<maxIndexDiff(arr);
	return 0;
}

