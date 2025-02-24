#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
	int n; cin >> n;
    vector <pair<int, int>> p;
    for(int i = 0; i < n; i++){
    	for(int j = i+1; j <= n; j++){
    		p.push_back({i, j});
    	}
    }
    cout << p.size() << endl;
    for(auto it : p)
    	cout << it.first << " " << it.second << endl;
    

    return 0;
}