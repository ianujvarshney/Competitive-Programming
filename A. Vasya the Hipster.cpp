/*
 *  Author : ianujvarshney
 *  Problem : A. Vasya the Hipster.cpp
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
	int r, b, c = 0;
	cin >> r >> b;
	for(r , b; r >0 && b >0; --r,--b)
	{
		c++;
	}
    if(r >= 2)
        cout << c << " " << r / 2 << "\n";
    else if( b >= 2)    
        cout << c << " " << b / 2 << "\n";
    else
        cout << c << " " <<  0 << "\n";

return 0;
}
