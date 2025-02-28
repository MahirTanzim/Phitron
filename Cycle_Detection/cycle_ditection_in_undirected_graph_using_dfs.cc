#include <bits/stdc++.h>
using namespace std;

bool visited[105];
vector <int> adj_list[105];
int parent[105];
bool cycle = false;

void dfs(int src){
	visited[src] = true;
	cout << src << endl;
	for(auto child : adj_list[src]){
		if(visited[child] && parent[src] != child)
			cycle = true;
		if(!visited[child]){
			dfs(child);
			parent[child] = src;
		}
	}
}


int main()
{
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_list[a].push_back(b);
    	adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    // cycle = false;
    for(int i = 0; i < n; i++){
    	if(!visited[i])
    		dfs(i);
    }
    cycle ? cout << "cycle detected\n" : cout << "No cycle\n";
    
    return 0;
}