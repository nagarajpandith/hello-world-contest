// https://www.codechef.com/HWRL2021/problems/HWRL2105
#include<bits/stdc++.h>
/* It is basically a header file that includes every standard library. 
In programming contests, using this file is a good idea, when you want to reduce 
the time wasted in doing other tasks, especially when your rank is time sensitive. 
However it has it's own disadvantages as it increases compilation time. */
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
         /* Sort is a C++ STL function which can sort array elements. It takes 2 parameters, starting point
        and ending point of sorting. Learn more - https://www.geeksforgeeks.org/sort-c-stl/ 
        However,You can also write a manual sort function to sort array elements. */
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