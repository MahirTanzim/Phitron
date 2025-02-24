#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl



void maxheap(vector <int> &v, int current){		// max heap
	while(current != 0){

		int parent = (current - 1) / 2;
		if(v[current] > v[parent])
			swap(v[current], v[parent]);
		else
			break;

		current = parent;
	}
}
void minheap(vector <int> &v, int current){		//min heap
	while(current != 0){

		int parent = (current - 1) / 2;
		if(v[current] < v[parent])
			swap(v[current], v[parent]);
		else
			break;
		current = parent;
	}

}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it : v)
		cin >> it;

	int val;
	cin >> val;

	v.push_back(val);

	for(auto &it : v)
		cout << it << " ";
	cout << endl;

	int current = v.size() - 1;
	

	maxheap(v, current);

	for(auto &it : v)
		cout << it << " ";
    
    
    return 0;
}