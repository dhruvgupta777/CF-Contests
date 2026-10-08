#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define rep(i, a, b) for (int i = a; i < b; i++)

const ll INF = 2e18;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vl s(n), more(n);
    ll mini = LLONG_MAX;

    rep(i, 0, n) {
        ll a, b, c;
        cin >> a >> b >> c;
        s[i] = a + b + c;
        mini = min(mini, s[i]);

        if (a > b || b > c) more[i] = 0;               
        else if (a == b && b == c) more[i] = INF;     
        else more[i] = 2 * (min(b - a, c - b) + 1);   
    }

    auto ok = [&](ll S) {
        ll tl = 0;
        rep(i, 0, n) {
            if (S <= s[i]) continue;
            tl += (S - s[i]) + more[i];
            if (tl > k) return false;
        }
        return true;
    };
    
    ll res = mini;
    ll lo = mini, hi = mini + k;
    while (res< hi) {
        ll mid = res + (hi - res + 1) / 2;
        if (ok(mid)) res = mid;
        else hi = mid - 1;
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}