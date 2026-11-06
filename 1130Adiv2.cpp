//1130B div2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < int, int > pii;
typedef vector < int > vi;
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n), pos(n);
    rep(i, 0, n) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int p = n - k + 1;         
    vector<bool> seen(n + 1, false);
    rep(i, 0, p) seen[a[i]] = true;

    int m = 0;
    while (seen[m]) m++;       

    if (m == p) {            
        cout << -1 << endl;
        return;
    }

    int mx = 0;                 
    rep(i, 0, p) if (a[i] > a[mx]) mx = i;

    cout << mx + 1 << " " << pos[m] + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}