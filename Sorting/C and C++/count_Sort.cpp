//-------Count Sort Algorithm-------

#include <bits/stdc++.h>

using namespace std;

void CountSort(int OriginalArray[], int n)
{
    int k = OriginalArray[0];
    //Finding maximum value in OriginalArr 
    for(int i=0;i<n;i++){
        k = max(k,OriginalArray[i]);
    }

    //Storing the no. of times the unique element has occured in OriginalArray
    int countArray[k+1] = {0};
    for(int i=0;i<n;i++){
        countArray[OriginalArray[i]]++;
    }
    //updating countArray by adding previous element to current element one by one
    for(int i=0;i<=k;i++){
        countArray[i+1]+=countArray[i];
    }

    int sortedArray[n];
    for(int i=n-1;i>=0;i--){
        sortedArray[--countArray[OriginalArray[i]]] = OriginalArray[i];
    }

    cout<<"Sorted array is:- ";
    for(int i=0;i<n;i++){
        cout<<sortedArray[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int n;
    cout<<"enter the size of array:- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the array element "<<i+1<<" :- ";
        cin>>arr[i];
    }

    CountSort(arr,n);//calling CountSort function passing array and it's size in the arguments.

    return 0;
}
/*
NOTE:-
1) the above algorithm only works for positive Integers (but can be extended to work for negative Integers as well).
2) it's time complexity is O(n).
3) Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted.
*/