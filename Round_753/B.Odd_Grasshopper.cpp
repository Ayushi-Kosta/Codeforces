// problem link  https://codeforces.com/contest/1607/problem/B

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
    ll x, n, ans=0;
    cin>>x>>n;
    if(n%4==1){
        if(x%2==0){
            ans=x-n;
        }
        else{
            ans=x+n;
        }
    }
    else if(n%4==2){
        if(x%2==0){
            ans=x+1;
        }
        else{
            ans=x-1;
        }
    }
    else if(n%4==3){
        if(x%2==0){
            ans=x+n+1;
        }
        else{
            ans=x-(n+1);
        }
    }
    else if(n%4==0){
        if(x%2==0){
            ans=x;
        }
        else{
            ans=x;
        }
    }
    cout<<ans<<nl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{
        solve();
    }

    return 0;
}
