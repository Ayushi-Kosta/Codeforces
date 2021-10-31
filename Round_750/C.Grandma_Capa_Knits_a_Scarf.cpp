// problem link  https://codeforces.com/contest/1582/problem/C

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
    int n, ans=INT_MAX;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<26; i++){
      char c='a'+i;
      int temp=0;
      int j=0, k=s.size()-1;
      bool check=1;
      while(j<k){
        if(s[j]==s[k]){
          j++; k--;
        }
        else if(s[j]==c){
          j++;
          temp++;
        }
        else if(s[k]==c){
          k--;
          temp++;
        }
        else{
          check=0;
          break;
        }
      }
      if(check){
          ans=min(ans, temp);
      }

    }
    if(ans!=INT_MAX){
        cout<<ans<<nl;
    }
    else{
      cout<<-1<<nl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{
        solve();
    }

    return 0;
}
