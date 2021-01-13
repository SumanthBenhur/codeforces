#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli test;
    cin>>test;
    while(test--){
        int a, b;
        cin>>a>>b;
        int ans = a^b;
        cout<<ans<<endl;
    }
    return 0;
}