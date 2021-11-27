// https://www.codechef.com/HWRL2021/problems/HWRL2104
#include <iostream>
using namespace std;
/* Logic is pretty simple. Imagine array has a, -b, c, -d elements then their sum
would be a-b+c-d which can be written as (a+b+c+d)-2b-2d that is Sum=(original sum)-(even numbers)
Adding or subtracting even number has no effect on parity. 
Even no + or - Even no = Even
Odd no + or - Even no = Odd 
If the original sum is even then Mahesh wins or else Suresh will
So even if they play optimally, winner is pre decided by the array inputs. */
int main() {
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    int arr[n], sum=0;;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
            sum=sum+arr[i];
	    }
	    if(sum%2==0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}