#include <bits/stdc++.h>
//correction
//backslash missing
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>&p) {return os<<'(' << p.first << ", " << p.second << ')';}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream& os, const T_container& v) {os << '{'; string sep;for(const T& x: v) os << sep << x, sep = ", "; return os << '}';}
void dbg_out() {cerr<<endl;}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {cerr << " " << H; dbg_out(T...); }

#ifdef SMIE
#define debug(args...) cerr << "(" << #args << "):",dbg_out(args)
#else
#define debug(args...)
#endif

#define pb                  push_back
#define eb                  emplace_back
#define mem(x, i)           memset(x, i, sizeof(x))
#define ff                  first
#define ss                  second
#define all(x)              x.begin(), x.end()
#define Q                   int totalcase; cin >> totalcase; for(int caseno=1; caseno<=totalcase; caseno++)


typedef long long               ll;
typedef unsigned long long      ull;
typedef long double             ld;
typedef pair<ll, ll>            pi;

ll powmod(ll a, ll b, ll MOD) { ll res = 1;a %= MOD;assert(b >= 0);for (; b; b >>= 1) { if (b & 1)res = res * a % MOD;a = a * a % MOD; }return res; }

const double PI = acos(-1.0);
const int mod = 1e9+7;
const int mxn = 1e5+5;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Q
    {
        int n, m, k;
        cin >> m >> n >> k;
        vector<int> cum(m+1), cum_1(m+1), cum_2(m+1);
        vector<pi> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].ff >> a[i].ss;
            cum[a[i].ff] += 1;
            if(a[i].ss < m) cum[a[i].ss+1] -= 1;
        }
        int zero = 0;
        for(int i = 1; i <= m; i++){
            cum[i] += cum[i-1];
            if(cum[i] == 1) cum_1[i] = 1;
            if(cum[i] == 2) cum_2[i] = 1;
            cum_1[i] += cum_1[i-1];
            cum_2[i] += cum_2[i-1];
            zero += (cum[i] == 0);
        }
        vector<pair<pair<int, int>, int> > sweep;
        for(int i = 0; i < n; i++){
            auto [x,y] = a[i];
            sweep.pb({{x, 0}, i});
            sweep.pb({{y+1, 1}, i});
        }
        debug(cum);
        debug(cum_2);
        debug(cum_1);
        set<int> active;
        sort(all(sweep));
        int j = 0;
        int ans = 0;
        int mx_one = 0;
        multiset<int> l_ind;
        for(auto [fx, ind]: sweep){
            auto [x, ck] = fx;
            if(ck == 0){
                int r = a[ind].ss;
                if(!l_ind.empty()){
                    int l = *l_ind.begin();
                    ans = max(ans, cum_1[r] - cum_1[l-1]);
                }
                int l = a[ind].ff;
                ans = max(ans, cum_1[r] - cum_1[l-1] + mx_one);
                l_ind.insert(l);
            }
            else{
                int l = a[ind].ff;
                int r = a[ind].ss;
                mx_one = max(mx_one, cum_1[r] - cum_1[l-1]);
                l_ind.erase(l_ind.find(l));
            }
        }   

        for(int pos = 1; pos <= m; pos++){
            while(j < sweep.size() && sweep[j].ff.ff <= pos){
                if(sweep[j].ff.ss == 0) active.insert(sweep[j].ss);
                else active.erase(sweep[j].ss);
                j++;
            }
            if(cum[pos] == 2){
                assert(active.size() == 2);
                int i1 = *active.begin();
                int i2 = *prev(active.end());
                int l = max(a[i1].ff, a[i2].ff);
                int r = min(a[i1].ss, a[i2].ss);
                int cnt = 0;
                if(l <= r){
                    cnt += cum_2[r] - cum_2[l-1];
                }
                l = min(a[i1].ff, a[i2].ff);
                r = max(a[i1].ss, a[i2].ss);
                if(l <= r){
                    cnt += cum_1[r] - cum_1[l-1];
                }
                ans = max(ans, cnt);
            }
            else if(cum[pos] == 1){
                assert(active.size() == 1);
                int i = *active.begin();
                int l = a[i].ff;
                int r = a[i].ss;
                int cnt = 0;
                if(l <= r){
                    cnt += cum_1[r] - cum_1[l-1];
                }
                ans = max(ans, cnt);
            }
        }
        cout << ans + zero <<endl;
    }
}
