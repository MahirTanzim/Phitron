#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int

vector<pair<int,int>> adj_list[105];
int dist[105];

void dijkastra(int src){
   priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0, src});
    dist[src] = 0;
    while(!pq.empty()){
        pair<int,int> par = pq.top();
        pq.pop();
        int par_node = par.second;
        int par_dist = par.first;

        for(pair<int,int> child : adj_list[par_node]){
            int child_node = child.first;
            int child_dist = child.second;
            if(par_dist+child_dist < dist[child_node]){
                dist[child_node] = par_dist+child_dist;
                pq.push({dist[child_node], child_node});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    
    for(int i = 0; i < e; i++){
    	int a, b, c;
    	cin >> a >> b >> c;
    	adj_list[a].push_back({b, c});
    	adj_list[b].push_back({a, c});
    }
    for(int i = 0; i < 105; i++)
        dist[i] = INT_MAX;
    dijkastra(0);
    for(int i = 0; i < n; i++)
        cout << i << " -> " << dist[i] << endl;
    return 0;
}

// 0 -> 0
// 1 -> 9
// 2 -> 10
// 3 -> 13
// 4 -> 7
// 5 -> 7
// 6 -> 18
// 7 -> 14
// 8 -> 15
// 9 -> 6