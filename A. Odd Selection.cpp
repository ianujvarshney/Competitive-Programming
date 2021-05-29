/*
 *  Author : ianujvarshney
 *  Problem : A. Odd Selection.cpp
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
		int n,m,K,cnt1=0,cnt2=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>K;
			if(K%2==1)
			{
				cnt1++;
			}else{
				cnt2++;
			}
		}
		if(cnt1==n&&m%2==0)
		{
			cout<<"NO";
			goto lala;
		}
		if(cnt1==0)
		{
			cout<<"NO";
		}else{
			if(cnt1%2==0)
			{
				cnt1--;
			}
			if(m-cnt1<=cnt2)
			{
				cout<<"YES";
			}else{
				cout<<"NO";
			}
		}
		lala:;
		cout<<endl;
	}
return 0;
}
