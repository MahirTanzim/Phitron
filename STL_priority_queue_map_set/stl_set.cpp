#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
    set <int> s;
    int n;
    cin >> n;
    while(n--){
    	int val;
    	cin >> val;
    	s.insert(val);
    }
    int cnt = 0;
    vector <int> v;
    for(auto it : s){
    	cout << it <<  " ";
       	// v.push_back(it);
    	cnt++;
    }
    cout << endl;
    // sort(v.begin(), v.end(), greater<int>());
    // for(auto it :v)
    // 	cout << it << " ";

    cout << endl << cnt << endl;
    return 0;
}