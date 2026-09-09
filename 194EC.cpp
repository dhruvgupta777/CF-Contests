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
    ll x, y;
    cin >> x >> y;
    ll sum= x + y;
    ll a = 0;
    bool tigt = true;
    for(int i = 30; i >= 0; i--){
        int sb = (sum >> i) & 1;
        int xb = (x >> i) & 1;
        if(tigt){
            if(sb == 1){
                if(xb == 1){
                    a |= (1LL << i);
                }
            } else {
                if(xb == 1){
                    tigt = false;
                }
            }
        } else {
            if(sb == 1){
                a |= (1LL << i);
            }
        }
    }
    cout << sum << " " << (x - a) << "\n";
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