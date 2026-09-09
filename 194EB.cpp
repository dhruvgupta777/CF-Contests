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
    ll x, y, k;
    cin >> x >> y >> k;
    
    ll d = y - x; // constant difference b - a
    ll L = x;
    ll R = x + k - 1; // inclusive range of "a" values (employees count each month)
    
    ll sum2 = 0;
    ll low2 = L;
    ll high2 = min(R, d);
    if(high2 >= low2){
        for(ll a = low2; a <= high2; a++){
            sum2 += d % a;
        }
    }
    
    ll low1 = max(L, d+1);
    ll high1 = R;
    ll count1 = 0;
    if(high1 >= low1){
        count1 = high1 - low1 + 1;
    }
    ll sum1 = d * count1;
    
    cout << (sum1 + sum2) << "\n";
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