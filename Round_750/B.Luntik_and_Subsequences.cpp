// problem link  https://codeforces.com/contest/1582/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0, c=0, z0=0, z1=0;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==0){
                z0++;
            }
            if(a[i]==1){
                z1++;
            }
        }
        c=z1*pow(2, z0);
        cout<<c<<endl;
   }
   return 0;
}
