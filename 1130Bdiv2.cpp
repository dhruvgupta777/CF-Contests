//1130B div2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;

    string x, y;
    cin >> x >> y;

    int cnt = 0;

    rep(i, 0, n) {
        if (x[i] == 'f') cnt++;
        if (y[i] == 'f') cnt++;
    }

    cout << cnt % 2 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}