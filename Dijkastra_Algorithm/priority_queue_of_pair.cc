#include <bits/stdc++.h>
using namespace std;



int main()
{
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({5,10});
    pq.push({2, 11});
    pq.push({12, 2});
    cout << pq.top().first << " " << pq.top().second << endl;
    
    return 0;
}