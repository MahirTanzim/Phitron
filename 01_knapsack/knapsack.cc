#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int val[101], weight[100];

int knapsack(int i, int mx_weight){

	if(i<0 || mx_weight <= 0)
		return 0;

	if(weight[i] <= mx_weight){
		int op1 = knapsack(i-1, mx_weight - weight[i]) + val[i];	// option 1 : bag e rakhbo
		int op2 = knapsack((i-1), mx_weight);  					// option 2 : bag e rakhbo na
		return max(op1, op2);
	}
	else
		return knapsack(i-1, mx_weight); 		// bag e rakhbo na
	
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    	cin >> val[i];
    for(int i = 0; i < n; i++)
    	cin >> weight[i];
    int mx_weight;
    cin >> mx_weight;
    cout << knapsack(n-1, mx_weight) << endl;
    return 0;
}