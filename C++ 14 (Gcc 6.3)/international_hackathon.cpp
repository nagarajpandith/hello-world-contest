//https://www.codechef.com/HWRL2021/problems/HWRL2102
#include<bits/stdc++.h>
/* It is basically a header file that includes every standard library. 
In programming contests, using this file is a good idea, when you want to reduce 
the time wasted in doing other tasks, especially when your rank is time sensitive. 
However it has it's own disadvantages as it increases compilation time. */
using namespace std;
int main() {
	int t;
    //Test Cases
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    int a,b;
	    int diff=INT_MAX; 
        /* INT_MAX is a C++ Macro which assigns the largest possible value integer datatype can hold, that is 2147483647. 
        This is done because we need a value for difference as we will be comparing it to difference of array elements. 
        This can also be intialised to some value like 1000000000 with datatype long. 
        Learn more about INT_MAX here - https://www.geeksforgeeks.org/int_max-int_min-cc-applications/ */
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n); 
        /* Sort is a C++ STL function which can sort array elements. It takes 2 parameters, starting point
        and ending point of sorting. Learn more - https://www.geeksforgeeks.org/sort-c-stl/ 
        However,You can also write a manual sort function to sort array elements. */
	    for(int i=0;i<n-1;i++) {
	        if(arr[i+1]-arr[i]<diff) {
	            diff=arr[i+1]-arr[i];
	        }
	    }
	    cout<<diff<<endl;   
	}
	return 0;
}