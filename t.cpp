/*
 *  Author : ianujvarshney
 *  Problem : t.cpp
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
	int t;
	cin>>t; 
	while(t--)
	{	
		int s1, s2, s3, s4;
		cin >> s1 >> s2 >> s3 >> s4;
		int team1 = max(s1,s2);
		int team2 = max(s3,s4);
		if(team1 > team2)
		{
			int mn = min(s1,s2);
			int mx = max(s3,s4);
			if(mn < mx)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else
		{
			int mn = min(s3,s4);
			int mx = max(s1,s2);
			if(mn < mx)
				cout << "Yes\n";
			else
				cout << "No\n";
		}

	}
return 0;
}
