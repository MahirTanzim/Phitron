#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


void max_priority(int n){
	priority_queue <int> pq;

	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		pq.push(val);
	}

	vector <int> v;
	while(!pq.empty()){
		v.push_back(pq.top());
		pq.pop();
	}
	for(auto it :v)
		cout << it << " ";
}
void min_priority(int n){
	priority_queue <int, vector<int>, greater<int>> pq;

	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		pq.push(val);
	}

	vector <int> v;
	while(!pq.empty()){
		v.push_back(pq.top());
		pq.pop();
	}
	for(auto it :v)
		cout << it << " ";
}

int main()
{
    int n;
    cin >> n;
    max_priority(n);
    
    
    return 0;
}