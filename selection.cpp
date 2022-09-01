#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void Selectionsort(int arr[], int n){
    int mid_index;
    for(int i=0;i<n-1;i++){
        mid_index = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mid_index]){
                mid_index = j;
            }
        }
        swap(arr[mid_index], arr[i]);
    }
}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Selectionsort(arr, n);
    printarray(arr,n);

    return 0;
}