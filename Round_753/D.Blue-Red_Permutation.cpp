// problem link  https://codeforces.com/contest/1607/problem/D

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


void solve(){
    int n;
    cin>>n;
    int a[n];
    string s;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> r, b;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='R'){
            r.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    sort(r.begin(), r.end(), greater<int>());
    sort(b.begin(), b.end());
    int bin=1;
    bool check=1;
    for(int i=0; i<b.size(); i++){
        if(bin>b[i]){
            check=0;
            break;
        }
        else{
            bin++;
        }
    }
    if(check) {
        int rin=n;
        for(int i=0; i<r.size(); i++){
        if(rin<r[i]){
            check=0;
            break;
        }
        else{
            rin--;
        }
    }
    }
    cout<<(check? "YES" : "NO")<<nl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{
        solve();
    }

    return 0;
}
