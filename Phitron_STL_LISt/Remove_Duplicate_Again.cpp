#include <bits/stdc++.h>
using namespace std;
// # define endl "\n"
// # define ll long long int

int main()
{
    list <int> l, ll;
    int val;
    while(cin >> val && val != -1)
        l.push_back(val);
    
    ll = l;
    ll.sort();
    ll.unique();
    for(auto it : ll)
        cout << it << " ";
    return 0;
}