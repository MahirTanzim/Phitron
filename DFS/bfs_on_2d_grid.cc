#include <bits/stdc++.h>
using namespace std;

char grid[101][101];
bool visited[101][101];
vector <pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

void bfs(int si, int sj){
    queue <pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while(!q.empty()){
        pair <int, int> node = q.front();
        q.pop();
        int node_i = node.first;
        int node_j = node.second;

        cout << node_i << " "  << endl;

        for(int i = 0; i<4; i++){
        	int ci = node_i + d[i].first;
        	int cj = node_j + d[i].second;
            if(valid(ci, cj) && !visited[ci][cj]){
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int main()
{

	cin >> n >> m;
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	    	cin >> grid[i][j];
	    }
	}
	memset(visited, false, sizeof(visited));
	int si, sj;
	cin >> si >> sj;

    bfs(si, sj);
    
    return 0;
}