#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int v=n-k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int sum=1;
        for(int i=0;i<n-1;i++){
            if(ar[i]!=ar[i+1]){
                sum++;
            }
        }
        if(sum<=v){
            cout<<sum<<endl;
        }
        else{
            cout<<v<<endl;
        }
    }
	return 0;
}