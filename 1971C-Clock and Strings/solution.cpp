#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



//*-------------------------*//
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a/gcd(a,b))*b;
}

int countSqrt(int l, int r){
    ll m = ceil(sqrt(l));
    ll n = floor(sqrt(r));
    return n-m+1;
}

int BinarytoDec(string s)
{
    int k = s.size();
    
    int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    }

    return ans;
}

//*------------------------*//



void Solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a>b){
        swap(a,b);
    }
    if(c>d){
        swap(c,d);
    }

    if((a<c and c<b and b<d) or (c<a and a<d and d<b)){
        cout << "YES\n";
        return;
    }
    if((c<a and a<d and d<b) or (a<c and c<b and b<d)){
        cout << "YES\n";
        return;
    }
    if((a<c and c<b and d<a) or (c<a and a<d and b<c)){
        cout << "YES\n";
        return;
    }
    if((c<a and a<d and b<c) or (a<c and c<b and d<a)){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

    
}

int main()
{
    Faster;
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}