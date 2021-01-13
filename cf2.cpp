#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    string s;
    cin>>s;
    char x = s[0];
    for(int i=1; i<s.length(); i++){
        if(s[i]>x) x=s[i];
    }
    
    string res = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]==x) 
            res += x;
    }
    cout<<res;
    return 0;
}