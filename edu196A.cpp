//A
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
    int l, r;
    cin >> l >> r;
    int n = r - l + 1;

    if (l > 0 || r < 0) {
        cout << n - 1 << '\n';
        return;
    }

    int m = min(-l, r);
    int kept = 2 * m + 1;    
    if (n > kept) kept++;     
    cout << n - kept << endl;
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