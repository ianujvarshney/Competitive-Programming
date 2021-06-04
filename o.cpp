/*
 *  Author : ianujvarshney
 *  Problem : o.cpp
 *  Created by  on 
*/

  

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define pb push_back
#define mod 1000000007
ll gcd(ll a, ll b){
	if(b == 0) return a;
    return gcd(b, a % b);} 


int main()
{ 
	fast;
	int t;
	cin>>t; 
	while(t--)
	{	

		int n ;
		cin >> n;
		int a[n], c1[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		} 

		int k = 0;
		for (int i = 0; i < n; ++i)
		{
				if(a[i] % 2 == 0)
				{
					c1[k] = a[i];
					k++;
				}
		}

		int  l = k;
		for (int i = 0; i < n; ++i)
		{
				if(a[i] % 2 != 0)
				{
					c1[l] = a[i];
					l++;
				}
		}

		
		int ans = 0;
		int size = sizeof(c1) / sizeof(c1[0]);

		for (int i = 0; i < size-1; ++i)
		{
			for (int j = i+1; j < size; ++j)
			{
				if(gcd(c1[i] , 2*c1[j]) > 1)
				{
					ans++;
				}
			}
			
		}
		
		cout << ans << "\n";
	}
return 0;
}
