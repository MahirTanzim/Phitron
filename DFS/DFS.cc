#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool visited[1001];


void dfs(int src){
	cout << src << " ";
	visited[src] = true;
	for(auto adj : adj_list[src])
		if(!visited[adj])
			dfs(adj);
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

    for(int i = 0; i < n; i++){
        cout << i << " : ";
    	for(auto it : adj_list[i])
    		cout << it << " ";
    	cout << endl;
    }
    for(int i = 0; i < n; i++){
    	cout << "DFS starting from " << i << ": ";
    	dfs(i);
    	memset(visited, false, sizeof(visited));
    	cout << endl;
    }
    




    
    return 0;
}