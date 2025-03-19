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
    int adj_matrix[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        	i == j ? adj_matrix[i][i] = 0 : adj_matrix[i][j] = INT_MAX;
        
        
    while(e--){
    	int a, b, c;
    	cin >> a >> b >> c;
    	adj_matrix[a][b] = c;
    }

    for(int k = 0; k < n; k++){
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	        	if(adj_matrix[i][k] != INT_MAX && adj_matrix[k][j] != INT_MAX && adj_matrix[i][k]+adj_matrix[k][j] < adj_matrix[i][j])
	        		adj_matrix[i][j] = adj_matrix[i][k]+adj_matrix[k][j];
	        }
	    }
    }


    bool flag = false;
    for(int i = 0; i < n; i++){
    	if(adj_matrix[i][i] < 0){
    		flag = true;
    		break;
    	}
    }

    if(flag) cout << "Negative Weighted Cycle Detected" << endl;
    else{
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++)
	        	if(adj_matrix[i][j] == INT_MAX)
	        		cout << "∞ ";
	        	else
	        		cout << adj_matrix[i][j] << " ";
	        cout << endl;
	    }
    }
    return 0;
}