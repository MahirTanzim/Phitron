#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int leader[1001];

int find(int node){
	
	if(leader[node] == -1)
		return node;
	int ult_leader = find(leader[node]);
	leader[node] = ult_leader;
	return ult_leader;

}

int main()
{
	memset(leader, -1, sizeof(leader));
	leader[0] = 1;
	leader[1] = -1;   
    leader[2] = 1;
    leader[3] = 1;
    leader[4] = 5;
    leader[5] = 3;
    cout << find(4) << endl;
    for(int i = 0; i < 6; i++)
    	cout << i << " -> " << leader[i] << endl;

    return 0;
}