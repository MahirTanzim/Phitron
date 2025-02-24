#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map <string,int> mp;
    while(ss >> word)
    	mp[word]++;

    for(auto it : mp)
    	cout << it.first << " " << it.second << endl;   
    return 0;
}