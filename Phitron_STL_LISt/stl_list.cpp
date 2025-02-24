#include <bits/stdc++.h>
using namespace std;
# define endl "\n"


int main()
{
    // list <int> l(10, 6);
    
    // cout << l.size() << endl;

    // for(auto it = l.begin(); it != l.end(); it++)
    //     cout << *it << endl;
    // cout << endl;
    // for(auto it : l)
    //     cout << it << endl;

    vector <int> v = {2,2,3,4};
    int a[] = {9,8,7,6,5,4,3,2,1};
    list <int> l = {1,2,3,4,5,6};
    // list <int> ll(v.begin(), v.end());
    // list <int> ll(l.begin(), l.end());
    list <int> ll(a, a+9);
    cout << l.size() << endl;
    for(auto it : ll)
        cout << it << " ";
    cout << endl;
    for(auto it : l)
        cout << it << " ";
    cout << endl;
    
    return 0;
}