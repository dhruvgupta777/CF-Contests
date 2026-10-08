#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)

const int shift = 30000;
int freq[60005];

void solve() {
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    int m = n - 4;
    vi v(m);
    rep(i, 0, m) v[i] = a[i] + a[i + 2] - a[i + 4];

    ll res = 0;
    rep(i, 0, m) {
        res += freq[v[i] + shift];
        freq[v[i] + shift]++;
    }

    rep(i, 0, m) {
        if (i + 2 < m && v[i] == v[i + 2]) res--;
        if (i + 4 < m && v[i] == v[i + 4]) res--;
    }

    rep(i, 0, m) freq[v[i] + shift] = 0;

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}