//https://www.codechef.com/HWRL2021/problems/HWRL2103
#include<bits/stdc++.h> 
/* It is basically a header file that includes every standard library. 
In programming contests, using this file is a good idea, when you want to reduce 
the time wasted in doing other tasks, especially when your rank is time sensitive. 
However it has it's own disadvantages as it increases compilation time. */
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
            /*max is a C++ STL used to find out the largest of the number passed to it.
            You can also write a manual function to find maximum */
        }
        cout<<ans<<endl;  
    }
}