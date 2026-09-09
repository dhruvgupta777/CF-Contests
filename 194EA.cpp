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
    vi a(n);
    rep(i,0,n) cin >> a[i];

    int hd = 0;
    if(a[0] == 1) hd++;
    if(a[n-1] == 1) hd++;

    if(hd == 0){
        cout << 0 << "\n";
        return;
    }

    int mz = 0;
    rep(i,1,n-1){
        if(a[i] == 0) mz++;
    }

    if(mz >= hd)
        cout << hd << "\n";
    else
        cout << -1 << "\n";
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