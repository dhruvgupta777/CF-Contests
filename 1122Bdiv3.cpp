#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;

    ll tl = llabs(a + c - b);
    ll bs = llabs(a - b - c);
    ll bps = llabs(a - b);

    ll ans = max(tl, min(bs, bps));

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }
}