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
    // vector <vector<int>> adj_matrx(n, vector<int>(n));
    int adj_matrx[n][n];
    memset(adj_matrx, 0, sizeof(adj_matrx));

    for(int i = 0; i < e; i++){
    	int a, b;
    	cin >> a >> b;
    	adj_matrx[a][b] = 1;
    	adj_matrx[b][a] = 1;
    }



    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++)
    		cout << adj_matrx[i][j] << " ";
    	cout << endl;
    }
    
    return 0;
}