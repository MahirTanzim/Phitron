#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int leader[1001];
int group_size[1001];

int find(int node){
	
	if(leader[node] == -1)
		return node;
	int ult_leader = find(leader[node]);
	leader[node] = ult_leader;
	return ult_leader;
}

void dsu_union(int node1, int node2){
	int leader1 = find(node1);
	int leader2 = find(node2);

	if(group_size[leader1] > group_size[leader2]){
		leader[leader2] = leader1;
		group_size[leader1]+=group_size[leader2];
	}
	else {
		leader[leader1] = leader2;
		group_size[leader2]+=group_size[leader1];
	}
}



int main()
{
	memset(leader, -1, sizeof(leader));
	memset(group_size, 1, sizeof(group_size));
	dsu_union(1,2);
    dsu_union(1, 0);
    dsu_union(1, 5);
    dsu_union(4, 3);
    dsu_union(4, 5);
    for(int i = 0; i < 6; i++)
    	cout << i << " -> " << leader[i] << endl;

    return 0;
}