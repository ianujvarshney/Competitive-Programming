/**
 *    author:  anuj      
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    ll n;
    cin >> n;
    while (n % 2 == 0) {
      n /= 2;
    }
    cout << (n == 1 ? "NO" : "YES") << '\n';
  }
  return 0;
}