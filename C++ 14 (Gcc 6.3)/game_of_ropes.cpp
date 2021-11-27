// https://www.codechef.com/HWRL2021/problems/HWRL2107
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
int min[31], max[31], T, numberOfSpots, lengthOfWire, quotient, remainder;
min[1] = 2;
    min[2] = 5;
    for(int i=3; i<=30; i++) {
        quotient = (i+1)/2;
        remainder = (i+1)%2;
        min[i] = (i+1) + min[quotient-1] + min[quotient+remainder-1];
    }
    /* Calculating the maximum possible length array
    for each number of spots from 1 to 30 */
    max[1] = 2;
    for(int i=2; i<=30; i++) {
        max[i] = (i+1) + max[i-1];
    }
    // Accepting the number of test cases
    cin>>T;
    // Executing each test case one by one
    while(T--) {
        /* Accepting the number of spots and the length of wire
           for the current test case */
        cin>>numberOfSpots>>lengthOfWire;
        /* If the length of wire is less than the
           minimum length required to place the soldiers
           among the current number of spots, display -1 */
        if(lengthOfWire < min[numberOfSpots]) {
            cout<<"-1"<<endl;
        }
        /* If the length of wire is more than the
           maximum length required to place the soldiers
           among current number of spots, display the
           extra length of wire that we have */
        else if(lengthOfWire > max[numberOfSpots]) {
            cout<<lengthOfWire-max[numberOfSpots]<<endl;
        }
        /* Otherwise it means that the length of wire
           is in between the minimum and maximum length required
           to place the soldiers among current number of spots,
           display "0" */
        else {
            cout<<"0"<<endl;
        }
    }
 
    return 0;
}
/* There are ther approaches to this problem. 
Have a look at Code submissions - https://www.codechef.com/HWRL2021/status/HWRL2107 */