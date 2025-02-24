#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int main()
{
    int q;
    cin >> q;
    list <int> l;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(x == 0)
            l.push_front(v);
        
        else if(x == 1)
            l.push_back(v);
        
        else if(x == 2)
            if(v < l.size())
                l.erase(next(l.begin(), v));

        list <int> ll(l);
        cout << "L ->";
        for(auto it : ll)
            cout << " " << it;
        cout << endl;

        ll.reverse();
        cout << "R ->";
        for(auto it : ll)
            cout << " " << it;
        cout << endl;

    }
    
    return 0;
}