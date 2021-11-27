#include<bits/stdc++.h>
using namespace std;
int  main() { 	
    int t ;
    cin>>t ;
    while(t--){
        int n,k ; 
        cin>>n>>k ;
        int ans = 0 ;
        for(int i=2 ; i<=k ; i++){
            int cur = n%i ;
            ans = max(ans,cur);
        }
        cout<<ans<<endl;  
    }
}