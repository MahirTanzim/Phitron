#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
    map <string, int> mp;
    mp["Apel"] = 2;
    mp["Kola"] = 4;
    mp["Aam"] = 6;


    for(auto it: mp)
    	cout << it.first << " " << it.second << endl;

    mp.count("Kola") ? cout << "Ache" : cout << "nai";
    return 0;
}