#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



//*-------------------------*//
int countSqrt(int l, int r){
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


void solve()
{
    int n, m;
    cin >> n >> m;

    int a[105][105];
    
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            a[i][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    if(n==1 and m==1){
        cout << a[0][0] << "\n";
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int maxi = INT_MIN;
            
            if(i==0 and j==0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j+1]);
                

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i==0 and j!=0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j+1]);
                maxi = max(maxi, a[i][j-1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }

        
            }

            if(i==0 and j==m-1){
                maxi = INT_MIN;         
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j-1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i!=0 and j==0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i-1][j]);
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j+1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i!=0 and j!=0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i-1][j]);
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j-1]);
                maxi = max(maxi, a[i][j+1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i!=0 and j==m-1){
                maxi = INT_MIN;
                maxi = max(maxi, a[i+1][j]);
                maxi = max(maxi, a[i][j-1]);
                maxi = max(maxi, a[i-1][j]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i==n-1 and j==0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i-1][j]);
                maxi = max(maxi, a[i][j+1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i==n-1 and j!=0){
                maxi = INT_MIN;
                maxi = max(maxi, a[i-1][j]);
                maxi = max(maxi, a[i][j+1]);
                maxi = max(maxi, a[i][j-1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            if(i==n-1 and j==m-1){
                maxi = INT_MIN;
                maxi = max(maxi, a[i-1][j]);
                maxi = max(maxi, a[i][j-1]);

                if(a[i][j] > maxi){
                    a[i][j] = maxi;
                }
            }

            
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";


}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}