//Big XOR problem C
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
    int n;
    cin >> n;

    vi res(n + 1, 0);

    int xr = 0;
    rep(i, 1, n + 1) xr ^= i;

    int a= 1;
    while (a* 2 <= n) a *= 2;

    while (a > 0) {
        if ((xr & (2 * a)) == 0) {
            res[a] = 1;
            xr ^= a;
            xr ^= (2 * a);
        }
        a /= 2;
    }

    rep(i, 1, n + 1) cout << res[i] << " \n"[i == n];
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