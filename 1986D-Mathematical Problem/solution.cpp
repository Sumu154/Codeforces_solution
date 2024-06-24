#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



//*-------------------------*//
int coSqrt(int l, int r){
    ll m = ceil(sqrt(l));
    ll n = floor(sqrt(r));
    return n-m+1;
}

int BinarytoDec(string s){
    int k = s.size();
    int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    }
    return ans;
}

string decToBinary(int n){
    string ans;
    while(n){
        if(n&1){
            ans += '1';
        }
        else{
            ans += '0';
        }
        n >>= 1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//*------------------------*//


ll dp[21][21];

ll cal(ll a, ll b, char ch)
{
    if(ch=='+'){
        return a+b;
    }
    else{
        return a*b;
    }
}

ll dfs(string s, int pos, int co)
{
    if(co==0){
        return stol(s.substr(pos));
    }
    if(dp[pos][co]!=-1){
        return dp[pos][co];
    }

    ll ans = 1e18;
    
    for(int i=pos ; i<s.size()-co; i++){
        ll a = stol(s.substr(pos, i-pos+1));
        ll b = dfs(s, i+1, co-1);

        ans = min(ans, cal(a, b, '+'));
        ans = min(ans, cal(a, b, '*'));
    }
    return dp[pos][co] = ans;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    memset(dp, -1, sizeof(dp));
    cout << dfs(s, 0, n-2) << "\n";
}

int main()
{
    Faster;
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}