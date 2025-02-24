#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


vector <int> adj_list[1001];
bool visited[1001];
int level[1001];


void bfs(int src){
	queue <int> q;
	q.push(src);
	visited[src] = true;
	level[src] = 0;

	while(!q.empty()){
		int node = q.front();
		q.pop();
		
		for(auto it : adj_list[node]){
			if(!visited[it]){
				q.push(it);
				visited[it] = true;
				level[it] = level[node]+1;
			}
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
    memset(level, -1, sizeof(level));
    int src, dest;
    cin >> src >> dest;
    bfs(src);
    // for(int i = 0; i < n; i++){
    // 	cout << i << " -> " << level[i] << endl;
    // }
    cout << level[dest] << endl;
    return 0;
}