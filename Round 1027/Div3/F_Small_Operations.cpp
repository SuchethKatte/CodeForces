#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define f first
#define s second

vll factors(ll n){
    vll ret;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){ret.pb(i);if(i*i < n){ret.pb(n/i);}}
    }
    sort(ret.begin(),ret.end());
    reverse(ret.begin(),ret.end());
    return ret;
}
ll MOD = 199000000007;
ll power(ll a,ll b){
    ll ans = a;if(b==0){return 1;}
    vll p2 ;ll i2 = 1;p2.pb(a);
    while(i2*2<=b){
        i2*=2;
        ans*=ans;ans%=MOD;p2.pb(ans);
    }
    ll ptr = p2.size()-1;
    ll d = 1;
    for(int i = 0;i<ptr;i++){d*=2;}b-=d;
    while(b>0){
        while(b<d){ptr--;d/=2;}
        b-=d;ans*=p2[ptr];ans%=MOD;
    }
    return ans;
}
ll divide(ll a,ll b){
    ll q =  (a*power(b,MOD-2))%MOD;
    return q;
}
ll tri(ll n){
    return ((n*(n+1))/2);
}
ll ceilD(ll a,ll b){
    if(a<0){
        return a/b;
    }
    return a/b + (a%b!=0);
}

map<ll,ll> Counters (vll V){
    map<ll,ll>ret;
    for(ll i:V){
        if(ret.find(i)==ret.end()){
            ret[i]=1;
        }else{
            ret[i]++;
        }
    }
    return ret;
}
vll inpVector(ll n){
    vll ret;
    for(int i = 0;i<n;i++){
        ll a;cin>>a;ret.pb(a);
        //char c;cin>>c;ret.pb(c-'a');
    }
    return ret;
}
vector<pll> inpPair(ll n){
    vector<pll> ret;
    for(int i = 0;i<n;i++){
        ll a;ll b;cin>>a>>b;ret.pb({a,b});
    }
    return ret;
}

ll nCr(ll n, ll r){
    ll ans = 1;
    for(int i = n-r+1;i<=n;i++){
        ans*=i;ans%=MOD;
    }
    ll di = 1;
    for(int i = 1;i<=r;i++){
        di*=i;di%=MOD;
    }
    return divide(ans,di);
}
bool isPal(ll n){
    string s = to_string(n);
    string s1 =to_string(n);
    reverse(s1.begin(),s1.end());
    return s==s1;
}
bool isPrime(ll n){
    for(ll i = 2;i*i<=n;i++){
        if(n%i==0){return false;}
    }
    return true;
}

vll getBits(ll n){
    vll ans;
    for(int i = 0;i<63;i++){
        ans.pb(n%2);
        n/=2;
    }
    return ans;
}
ll hasBit(ll n, ll b){
    return (n>>b)%2;
}
ll sum(vll V){
    ll s = 0;
    for(ll L:V){s+=L;}
    return s;
}
ll maxV(vll V){
    ll m = V[0];
    for(ll L:V){m=max(m,L);}
    return m;
}
ll minV(vll V){
    ll m = V[0];
    for(ll L:V){m=min(m,L);}
    return m;
}
vll digits(ll n){
    vll ans;ll K=1;
    while(n>0){
        ans.pb((n%10)*K);
        n/=10;
    }
    return ans;
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
vll psum(vll V){
    vll ret={0};
    for(int i = 0;i<V.size();i++){
        ret.pb(ret[i]+V[i]);
    }
    return ret;
}
void printVec(vll V){
    for(ll L:V){cout<<L<<" ";}
    cout<<"\n";
}
ll gcd(ll a,ll b){
    if(a==0){
        return b;
    }
    if(a>b){
        return gcd(b,a);
    }
    return gcd(b%a,a);
}
class SegTree{
private:
    vll tree;
    ll size;
    ll start;
    ll (*fun)(ll,ll);
public: 
    SegTree(vll V,ll startr,ll (*function)(ll,ll)){
        start = startr;
        fun = function;
        for(ll i = 0;i<V.size()*2;i++){
            tree.pb(0);
            if(i>= V.size()){tree[i]=(V[i - V.size()]);}
        }
        for(int i = V.size()-1;i>0;i--){
            tree[i] = fun(tree[i*2], tree[i*2 + 1]);
        }
        size = tree.size()/2;
    }
    void update(ll ind,ll val){
        tree[size + ind] = val;
        ll I = (size + ind)/2;
        while(I>0){
            tree[I] =fun(tree[I*2], tree[I*2 + 1]);
            I/=2;
        }
    }
    ll query(ll l,ll r){
        ll ans = start;
        ll L = l+size;
        ll R = r+size;
        while(L<R){
            if(L%2==1){ans = fun(ans,tree[L]);}
            L = (L+1)/2;
            if(R%2==0){ans = fun(ans, tree[R]);}
            R = (R-1)/2;
        }
        if(L==R){return fun(ans,tree[L]);}
        else{return ans;}
    }
    
};
vll sieve(ll n){
    vll primes = {2,3};
    for(int i = 4;i<n;i++){
        for(ll P:primes){
            if(P*P > i){
                primes.pb(i);
                break;
            }
            if(i%P==0){break;}
        }
    }
    return primes;
}
class DisjointSets {
  private:
	vll parents;
	vll sizes;
    vll act;
    ll nact=0;
  public:
	DisjointSets(ll size) : parents(size), sizes(size, 1), act(size,0) {
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}
	void actiavte(ll x){
	    x = find(x);
	    nact-=act[x];
	    act[x]=1;
	    nact++;
	}
	bool isActive(ll x){
	    return act[find(x)];
	}
	ll find(ll x) { return parents[x] == x ? x : (parents[x] = find(parents[x])); }
	bool unite(ll x, ll y) {
		ll x_root = find(x);
		ll y_root = find(y);
		if (x_root == y_root) { return false; }

		if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		if(act[y_root]==1){act[x_root]=1;}
		return true;
	}
	bool connected(ll x, ll y) { return find(x) == find(y); }
	ll size(ll x){
	    ll x_root = find(x);
	    return sizes[x_root];
	}
	ll NN(){
	    return nact;
	}
};
vll inpBV(int n){
    vll r;
    for(int i = 0;i<n;i++){
        char c;cin>>c;
        r.pb(c-'0');
    }
    return r;
}
vector<vll>facts;
void prec(){
    for(int i = 1;i<1000005;i++){
        facts.pb({});
    }
    for(int i = 1;i<1000005;i++){
        for(int j=1;j*i<1000005;j++){
            facts[i*j].pb(i);
        }
    }
}
map<ll,ll>cache;
ll op(ll m, ll k){
    if(cache.find(m)!=cache.end()){
        return cache[m];
    }
    if(m==1){return 0;}
    vll f = facts[m];
    ll ans = 12345678;
    for(ll L:f){
        if(L<=k&&L>1){
            ans = min(ans, 1 + op(m/L,k));
        }
    }
    if(ans==12345678){return -1000000;}
    else{cache[m]=ans;return ans;}
}
void solve(){
    ll x,y,k;cin>>x>>y>>k;
    ll g = __gcd(x,y);
    ll a = op(x/g,k);
    ll b = op(y/g,k);
    if(min(a,b)<0){cout<<-1<<"\n";}
    else{cout<<a+b<<"\n";}
    cache.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    prec();
    while(t--){
        solve();
    }
    
}