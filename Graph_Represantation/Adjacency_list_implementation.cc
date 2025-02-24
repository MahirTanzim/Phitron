#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main(){

    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_list[a].push_back(b);
    	adj_list[b].push_back(a);
    }
    for(int i = 0; i < n; i++){
    	cout << i << " -> ";
    	for(auto it : adj_list[i])
    		cout << it << " ";
    	cout << endl;
    }
    
    return 0;
}