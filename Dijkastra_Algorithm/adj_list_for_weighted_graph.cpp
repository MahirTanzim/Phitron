#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl



int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    for(int i = 0; i < e; i++){
    	int a, b, c;
    	cin >> a >> b >> c;
    	adj_list[a].push_back({b, c});
    	adj_list[b].push_back({a, c});
    }
    for(int i = 0; i < n; i++){
    	cout << i << " -> ";
    	for(auto it : adj_list[i])
    		cout << "{" << it.first << "," << it.second << "}";
    	cout << endl;
    }
    return 0;
}