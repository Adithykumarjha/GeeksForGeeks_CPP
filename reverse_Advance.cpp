#include <bits/stdc++.h>
using namespace std;


void rev(int arr[], int l, int r) {
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}


void print(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int k;
    cout<<"Enter number of Rotations:"<<" ";
    cin>>k;
    k = k % n;
    
    cout<<"\n1. Clockwise Rotation\n"<<" ";
    cout<<"\n2. Anti-Clockwise Rotation\n"<<" ";
    
    
    int choice;
    cout<<"\nEnter your Choice:"<<" ";
    cin>>choice;
    
    switch(choice){
    	
    	case 1:
    		rev(arr, 0, n - 1);     
            rev(arr, 0, k - 1);     
            rev(arr, k, n - 1); 
            print(arr, n);
            break;
            
            
        case 2:
        	rev(arr, k, n - 1);      
            rev(arr, 0, k - 1);
			rev(arr, 0, n - 1);     
            
            print(arr, n);
            break;
            
            
        default:
        	cout<<"Invalid Choice !"<<" ";
			break;
		
        	
    		
	}

   
        

      

    return 0;
}

