// problem link  https://codeforces.com/contest/1604/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fl(i, a, b) for(int i = a; i<b; i++)
#define vi vector<int>
#define PB push_back
#define tc int t; cin>>t; while(t--)
#define aa(arr,n) int arr[n]; fl(i,0,n) cin>>arr[i];
#define av(arr, n) vector<int> arr(n); fl(i,0,n) cin>>arr[i];
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define R return
#define B break
#define ff first
#define ss second
#define rmin(a,b) (a=min((a), (b)))
#define rmax(a,b) (a=max((a), (b)))
#define C continue
#define lcm(a,b) (a/__gcd(a, b))*b
#define mod 1000000007
const char nl = '\n';
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n], mx=0, c=0;
    string ans="NO";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n%2==0){
        ans="YES";
    }
    else{
        for(int i=0; i<n-1; i++){
            if(a[i]>=a[i+1]){
                ans="YES";
                break;
            }
        }
    }
    cout << ans << nl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{
        solve();
    }

    return 0;
}
