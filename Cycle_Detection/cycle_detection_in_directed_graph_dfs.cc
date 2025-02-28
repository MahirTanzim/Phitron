#include <bits/stdc++.h>
using namespace std;

bool visited[105];
vector <int> adj_list[105];
bool vispath[105];
bool cycle;

void dfs(int src){
	visited[src] = true;
	vispath[src] = true;
	cout << src << endl;
	for(auto child : adj_list[src]){
		if(visited[child] && vispath[child])
			cycle = true;
		if(!visited[child])
			dfs(child);
	}
	vispath[src] = false;
}


int main()
{
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_list[a].push_back(b);
    	
    }
    memset(visited, false, sizeof(visited));
    memset(vispath, false, sizeof(vispath));
    cycle = false;
    for(int i = 0; i < n; i++){
    	if(!visited[i])
    		dfs(i);
    }
    cycle ? cout << "cycle detected\n" : cout << "No cycle\n";
    
    return 0;
}