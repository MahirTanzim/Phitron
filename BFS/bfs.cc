#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool visited[1001];

void bfs(int src){
    queue <int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(auto adj : adj_list[node]){
            if(!visited[adj]){
                q.push(adj);
                visited[adj] = true;
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

    for(int i = 0; i < n; i++){
        cout << i << " : ";
    	for(auto it : adj_list[i])
    		cout << it << " ";
    	cout << endl;
    }

    for(int i = 0; i < n; i++){
        cout << "BFS from Starting Node " << i << ": ";
        bfs(i);
        memset(visited, false, sizeof(visited));
        cout << endl;
    }

    
    return 0;
}