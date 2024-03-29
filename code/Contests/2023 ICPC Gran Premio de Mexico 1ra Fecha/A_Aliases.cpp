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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    set<string> v;
    int ans = 0;
    set<string> v1;
    map<string, bool> ma;
    while(n--){
        int a; cin >> a;
        string ini = "";
        for (int i = 0; i<a; i++){
            string s; cin >> s;
            ini += s[0];
        }
        if (!v.count(ini)) ans++;
        else {
            if (!ma[ini]) ans--;
            ma[ini] = true;
        }
        v.insert(ini);
    }
    cout << ans << "\n";
}