// problem link  https://codeforces.com/contest/1582/problem/D

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
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    if(n%2==0){
      int c=0;
      for(int i=n-1; i>=0; i--){
        if(c < n/2) cout<<-a[i]<<" ";
        else cout<<a[i]<<" ";
        c++;
      }
    }
    else{
      if(a[1]+a[2] != 0){
        cout<<a[1]+a[2]<<" "<<-a[0]<<" "<<-a[0]<<" ";
      }
      else if(a[0]+a[1]!=0){
        cout<<a[2]<<" "<<a[2]<<a[0]+a[1]<<" ";
      }
      else if(a[0]+a[2]!=0){
        cout<<a[1]<<" "<<a[0]+a[2]<<" "<<a[1]<<" ";
      }
      int c=0;
      for(int i=n-1; i>=3; i--){
        if(c < (n-3)/2) cout<<-a[i]<<" ";
        else cout<<a[i]<<" ";
        c++;
      }
    }
    cout<<nl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{
        solve();
    }

    return 0;
}
