#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"


vector <int> adj_list[1001];
bool visited[1001];
int level[1001];
int previous[1001];


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
				previous[it] = node;
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
    memset(previous, -1, sizeof(previous));
    int src, dest;
    cin >> src >> dest;
    bfs(src);

    // for(int i = 0; i < n; i++){
    // 	cout <<i <<  " : " << previous[i] << endl;
    // }
    vector <int> path;
    int node = dest;
    while(node != -1){
    	path.push_back(node);
    	node = previous[node];
    }


    reverse(path.begin(), path.end());
    for(auto it : path) cout << it << " ";
    	
    return 0;
}