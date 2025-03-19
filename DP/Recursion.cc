#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int fact(int n){
	if(n==1) return 1;
	
	return n * fact(n-1);;
}
int main()
{
    cout << fact(3);
    
    return 0;
}