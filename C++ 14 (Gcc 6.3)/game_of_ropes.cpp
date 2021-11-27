#include <bits/stdc++.h>
using namespace std;
int maxLength(int n){
    if(n==1) return 2;
    if(n==2) return 5;
    int ans = n+1 + maxLength(n-1);
    return ans;
}
int minLength(int n) {
    if(n==1) return 2;
    if(n==2) return 5;
    int ans = n+1 + minLength((n-1)/2) + minLength((n-1)-(n-1)/2);
    return ans;
}

int main() {
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int max = maxLength(n);
        int min = minLength(n);
        if(m>=max) cout<<m-max<<endl;
        else if(m>=min) cout<<0<<endl;
        else cout<<-1<<endl;
        }
        return 0;
}