#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int leader[100005];
int group_size[100005];

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
    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while(e--){
    	int a, b;
    	cin >> a >> b;
    	int leader_a = find(a);
    	int leader_b = find(b);

    	if(leader_a == leader_b) 
    		cycle = true;
    	else 
    		dsu_union(a, b);
    }

    cout << (cycle ? "Cycle Detected" : "No Cycle") << endl;
    return 0;
}