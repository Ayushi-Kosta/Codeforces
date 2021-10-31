// problem link  https://codeforces.com/contest/1582/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, ans=0;
        cin>>a>>b>>c;
        //even c
        if(c%2==0){
            if(b%2==0){
                if(a%2==0){
                    ans=0;
                }
                else{
                    ans=1;
                }
            }
            else{
                if(a%2==0){
                    ans=0;
                }
                else{
                    ans=1;
                }
            }
        }
        //odd c
        else{
                if(a%2==0){
                    ans=1;
                }
                else{
                    ans=0;
                }
        }

    cout<<ans<<endl;
   }
   return 0;
}
