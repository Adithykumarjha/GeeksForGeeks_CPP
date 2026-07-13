#include<bits/stdc++.h>
using namespace std;


class Solution{
	public:
		vector<int>bfsOfGraph(int v, vector<int>adj[]){
			vector<int>vis(v,0);
			vis[0]=1;
			queue<int>q;
			q.push(0);
			vector<int>bfs;
			
			while(!q.empty()){
				int node = q.front();
				q.pop();
				bfs.push_back(node);
				
				
				for(auto it:adj[node]){
					if(!vis[it]){
						vis[it]=1;
						q.push(it);
					}
				}
				
			}
			return bfs;
			
			
		}
};

int main(){
	int V,E;
	cout<<"Enter the number of vertices and edges: ";
	cin>>V>>E;
	
	vector<int>adj[V];
	
	cout<<"Enter"<<E<<"edges(u,v):\n";
	
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		
		adj[u].push_back(v);
		adj[v].push_back(u);
		
	}
	
	Solution obj;
	vector<int>ans = obj.bfsOfGraph(V,adj);
	
	cout<<"BFS Traversal: ";
	
	for(int a:ans){
		cout<<a<<" ";
	}
	
	cout<<endl;
	return 0;
}
