#include <bits/stdc++.h>
using namespace std;
#define sz(arr) ((int) arr.size())
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<long long> vl;
const int INF = 1e9;
const ll INFL = 1e18;
const int MOD = 1e9+7;
int dirx[4] = {0,-1,1,0};
int diry[4] = {-1,0,0,1};
int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int act,res=0,n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>act;
        if(act<=k)res++;
    }cout<<res<<"\n";
    return 0;
    
}