//A pointer is a variable whose value is the address of another variable.

#include <iostream>
using namespace std;

int main(){
    int i = 10;
    cout<< &i <<endl;//address of variable i

    int *p = &i;//declaring an integer pointer variable 'p' in which address of 'i' is stored
    cout<<p<<endl;

    cout<<*p<<endl;//dereferencing p will give the value stored in i

    float f = 10.2;
    float *pf = &f;//pointer to a float

    double d = 122.32;
    double *pd = &d;//pointer to a double

}
