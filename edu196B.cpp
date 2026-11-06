//B
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
    vi a(n);
    rep(i, 0, n) 
    cin >> a[i];

    int bst = 0;
    rep(i, 0, n) {
        int cnt = 0;
        rep(j, 0, n) if (a[j] % a[i] == 0) cnt++;
        bst = max(bst, cnt);
    }
    cout << n - bst << endl;
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