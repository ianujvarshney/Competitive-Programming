/*
 *  Author : ianujvarshney
 *  Problem : A. Soldier and Bananas.cpp
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
	int k , n, w;
	cin >> k >> n >> w;
	if(k >= w)
		cout << 0 << "\n";
	else
	{
		int sum = 0;
		for (int i = 1; i <= w; ++i)
		{
			sum+=i*(k);
		}
		cout << n-sum << "\n";
	}

return 0;
}
