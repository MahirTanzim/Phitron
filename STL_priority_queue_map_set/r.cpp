#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define all(x) x.begin(),x.end()
# define yes cout<<"YES\n"
# define no cout<<"NO\n"



void solution(){
    int n;
    cin >> n;
    stack <int> s;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        s.push(val);
    }
    int m;
    cin >> m;
    queue <int> q;
    for(int i = 0; i < m; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    if(n != m){
        no;
        return;
    }
    while(!q.empty() && !s.empty()){
        if(s.top() != q.front()){
            no;
            return;
        }
        s.pop();
        q.pop();
    }
    yes;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--){
        solution();
    }
    return 0;
}