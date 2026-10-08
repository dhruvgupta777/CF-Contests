#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    string str;
    cin >> n >> str;

    vector<bool> print(n + 1, false);
    vi st;
    rep(i, 0, n) {
        int id = i + 1;
        if (str[i] == '1') {
            st.pb(id);
        } else if (str[i] == '2') {
            if (!st.empty()) {
                print[st.back()] = true;
                st.pop_back();
            } else {
                print[id] = true;
            }
        } else {
            print[id] = true;
        }
    }

    vi res;
    rep(i, 1, n + 1) {
        if (!print[i]) res.pb(i);
    }

    cout << res.size() << "\n";
    for (int x : res) cout << x << " ";
    cout << "\n";
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