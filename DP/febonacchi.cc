#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int fibo(int n){
	if(n == 1) return 1;
	if(n == 0) return 0;

	
	return fibo(n-1) + fibo(n-2);
}
int main()
{
    cout << fibo(10);
    
    return 0;
}