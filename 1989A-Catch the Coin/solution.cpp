#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;


void Solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i].first >> a[i].second;
    }

    for(int i=0 ; i<n ; i++){
        int x = a[i].first;
        int y = a[i].second;

        int man = abs(x);
        int coin = man+y;

        if(coin+1 >= man){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}

int main()
{
    Faster;
    
    Solve();
    
}