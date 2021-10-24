/* Iterative Function to calculate (x^y) in O(log y) */

#include <bits/stdc++.h>

using namespace std;

int power(int x, int y)
{
     
    // Initialize answer
    int res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    return res;
}

int main(){
    int base,p;
    cout<<"to calculate x to the power y\nEnter x:- ";
    cin>>base;
    cout<<"Enter y:- ";
    cin>>p;

    cout<<base<<"^"<<p<<" = "<<power(base,p)<<endl;

    return 0;
}