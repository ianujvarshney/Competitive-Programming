 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 void solve(void);
 int main()
 {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll T;
    cin >> T;
    while(T--) solve();
    return 0;
}
 	
 	
 	

 void solve() {
    ll N;
    cin >> N;
    if(N == 1) {
        cout << 9 << endl;
        return;
    }
    ll now;
    for(int i = 0; i < N; i++) {
        if(i == 0) now = 9;
        else if(i == 1) now = 8;
        else now = (now + 1) % 10;
        cout << now;
    }
    cout << endl;
}