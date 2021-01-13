#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0; i<m+1; i++){
        cin>>arr[i];
    }

    int friends = 0;

    for(int i=0; i<m; i++){
        int x = arr[i]^arr[m];
        int diff_bits = 0;
        for (int j = 0; j < n; j++)
            if (((x>>j)&1) == 1)
                diff_bits++;

        if(diff_bits <= k) friends++;
    }

    cout<<friends<<endl;

    return 0;
}