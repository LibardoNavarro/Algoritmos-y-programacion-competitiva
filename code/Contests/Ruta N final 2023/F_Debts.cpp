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
ll n=-1,m;
	while(cin>>n, n!=-1){
		cin>>m;
		ll act=0;
		ll res=m;
		ll prestamos=0;
		ll acum=0;
		for(ll i=0;i<n;i++){
			cin>>act;
			acum+=act;
			if(acum<0){
				prestamos+=abs(acum);
				acum=0;
			}
	}
	res+=prestamos;
	if(acum!=0)res-=acum;
	if(res<0)res=0;
	cout<<prestamos<<" "<<res<<"\n";
	n=-1;
	}

	return 0;
	}