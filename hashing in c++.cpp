/*
 *  Author : ianujvarshney
 *  Problem : hashing in c++.cpp
 *  Created by  on 
*/

  

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define pb push_back
const int N = 1e7+10;
int hsh[N];
int gcd(int a, int b){
	if(b == 0) return a;
    return gcd(b, a % b);} 


int main()
{ 
	fast;

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[n];
		hsh[a[n]]++;
	}

	int t;
	cin>>t; 

	while(t--)
	{	
		int x;
		cin >> x;
		cout << hsh[x] << "\n";
	}
	
return 0;
}
