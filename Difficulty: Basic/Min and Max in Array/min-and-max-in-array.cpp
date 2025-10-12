class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int mn=INT_MAX;
        int mx=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<mn){
                mn=arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
        
        return {mn,mx};
        
    
    }
};