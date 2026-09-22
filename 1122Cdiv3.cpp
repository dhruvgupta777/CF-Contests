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
    int n;
    cin >> n;
    string s;
    
    cin >> s;

    if(s[0] == '1'){
        int zero = 0;
        for(char c : s) if(c == '0') zero++;

        cout << zero  << endl;
        return;
    }

    vi cnt1(n+1, 0), cnt0(n+1, 0);
    rep(i,0,n){
        cnt1[i+1] = cnt1[i] + (s[i] == '1');
        cnt0[i+1] = cnt0[i] + (s[i] == '0');
    }

    int t0 = cnt0[n];

    ll res = cnt1[n]; 

    rep(k,1,n){
        if(s[k] == '1'){ 
            ll cost = cnt1[k] + (ll)(t0 - cnt0[k+1]);

            res = min(res, cost);
        }
    }

    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }
    return 0;
}