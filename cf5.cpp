#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){

    char n[20];
    cin>>n;
    int x = strlen(n);
    int ans = 0;
     ans = (1<<x) -2 ;
     for(lli i=x-1, count = 0; i>=0; i--, count++){
        if (n[i]=='7') ans+=(1<<count);
     }

     cout<<ans+1<<endl;
    
    return 0;
}