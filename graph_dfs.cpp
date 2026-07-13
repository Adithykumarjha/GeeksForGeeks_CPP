#include<bits/stdc++.h>
using namespace std;


class Solution{
	
	private:
		void dfs(int node, vector<int>adj[], vector<int>&vis, vector<int> &ls){
			vis[node]=1;
			ls.push_back(node);
			// traverse all its neighbours
			for(auto it:adj[node]){
				if(!vis[it]){
					dfs(it,adj,vis,ls);
				}
			}
		}
		
		
	public:
	
	vector<int>dfsOfGraph(int V, vector<int>adj[]){
		
		vector<int>vis(V,0);
		int start =0;
		vector<int>ls;
		dfs(start, adj,vis,ls);
		
		return ls;
		
	}	
};

int main(){
	int V,E;
	cout<<"Enter number of vertices and edges: ";
	cin>>V>>E;
	vector<int>adj[V];
	cout<<"Enter "<<E<<" edges (u,v):\n";
	
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		
		adj[u].push_back(v);
		adj[v].push_back(u);
		
		
	}
	
	Solution obj;
	
	vector<int>ans = obj.dfsOfGraph(V,adj);
	
	cout<<"DFS Traversal: ";
	
	for(int node:ans){
		cout<<node<<" ";
	}
	
	cout<<endl;
	return 0;
	
}
