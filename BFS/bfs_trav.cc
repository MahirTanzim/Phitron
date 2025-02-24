#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[8];
bool visited[8];

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
    adj_list[0] = {2, 3};
    adj_list[1] = {2, 3, 5};
    adj_list[2] = {0, 1, 4};
    adj_list[3] = {0, 1, 5, 6};
    adj_list[4] = {2, 6};
    adj_list[5] = {1, 3, 7};
    adj_list[6] = {3, 4, 7};
    adj_list[7] = {5, 6};
    memset(visited, false, sizeof(visited));



    for(int i = 0; i < 8; i++){
        cout << "BFS from Starting Node " << i << ": ";
        bfs(i);
        memset(visited, false, sizeof(visited));
        cout << endl;
    }


    return 0;
}