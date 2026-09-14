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


    int one = 0;

    rep(i,0,n){
        int x;
        cin >> x;
        one += x;
    }

    if(2 *one >= n){

        cout << "Bessie\n";
    }else{

        cout << "Elsie\n";
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