/*
 *  Author : ianujvarshney
 *  Problem : A. Fox And Snake.cpp
 *  Created by  on 
*/

  

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define pb push_back
#define mod 1000000007
int gcd(int a, int b){
	if(b == 0) return a;
    return gcd(b, a % b);} 


int main()
{ 
	fast;
	ll n,m;
	cin >> n >> m; 
	for (ll i = 1; i <= n; ++i)
	{
		for (ll j = 1; j <= m; ++j)
		{
			if(i % 2 == 0 && i % 4 != 0 && j == m)
				cout << "#";
			else if(i % 4 == 0 && j == 1)
				cout << "#";
			else if(i % 2 == 0)	
			    cout << ".";
			else
			    cout << "#";
		}
		cout << "\n";
	}
return 0;
}
