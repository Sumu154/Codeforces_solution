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
    string s;
    cin >> s;
    int oToz = 1;
    int zToo = -1;
    for(int i=0 ; i<s.size()-1 ; i++){
        if(s[i]=='1' and s[i+1]=='0'){
            oToz++;
        }
        else if(s[i]=='0' and s[i+1]=='1'){
            zToo++;
        }
    }
    if(zToo!=-1){
        cout << oToz+zToo << "\n";
    }
    else{
        cout << oToz << "\n";
    }

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