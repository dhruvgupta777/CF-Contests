#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < int, int > pii;
typedef vector < int > vi;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
int n, x;
vector<ll> a;
bool ok(ll k) {
    vector<bool> vec(n);
    rep(i, 0, n) {
        bool check = false;
        if (i > 0 && a[i] - a[i - 1] <= k) check = true;
        if (i + 1 < n && a[i + 1] - a[i] <= k) check = true;
        vec[i] = !check;
    }
    int need = 0;
    rep(i, 0, n) {
        if (!vec[i]) continue;
        need++;
        if (i + 1 < n && vec[i + 1] && a[i + 1] - a[i] <= 2 * k) i++; 
        if (need > x) return false;
    }
    return need <= x;
}

void solve() {
    cin >> n >> x;
    a.assign(n, 0);
    rep(i, 0, n) cin >> a[i];

    ll lo = 1, hi = 1000000000;
    while (lo < hi) {
        ll mid = (lo + hi) / 2;
        if (ok(mid)) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << '\n';
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