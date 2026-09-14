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
    int n,k;
    cin >> n >> k;

    if(k < n || k > 2*n-1){
        cout << -1 << "\n";

        return;
    }

    vector<vi> a(n,vi(n,0));

    int sh = 2*n-k;
    int cur = 1;

    rep(i,0,sh){

        a[i][i] = cur++;
    }


    rep(i,sh,n){
        a[i][0] = cur++;
    }

  
    rep(j,sh,n){
        a[0][j] = cur++;
    }
    rep(i,0,n){
        rep(j,0,n){

            if(a[i][j] == 0){
                
                a[i][j] = cur++;
            }
        }
    }

    rep(i,0,n){
        rep(j,0,n){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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