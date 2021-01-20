#include <bits/stdc++.h> 
#include<boost/multiprecision/cpp_int.hpp>
#define ll long long 
#define nnn ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using namespace boost::multiprecision;
int main() {
 nnn ll t;
 cin>>t;
 while(t--)
 {
     ll a;
     cpp_int s=1;
     cin>>a;
     for(int i=1;i<=a;i++)
     s=s*i;
     cout<<s<<endl;}
 }