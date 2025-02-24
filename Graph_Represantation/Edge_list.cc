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

    vector<pair<int, int>> edge_list;
    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	edge_list.push_back({a, b});
    }

    for(auto it : edge_list)
    	cout << it.first << " " << it.second << endl;
    
    return 0;
}