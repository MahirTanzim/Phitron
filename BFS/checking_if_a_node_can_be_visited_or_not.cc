#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


vector <int> adj_list[1001];
bool visited[1001];


void bfs(int src, int dest){
	queue <int> q;
	q.push(src);
	visited[src] = true;

	while(!q.empty()){
		int node = q.front();
		q.pop();
		// cout << node << " ";
		for(auto it : adj_list[node]){
			if(!visited[it]){
				q.push(it);
				visited[it] = true;
			}
		}
	}

	visited[dest] ? yes : no;
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
    
    int src, dest;
    cin >> src >> dest;
    bfs(src, dest);
    
    return 0;
}