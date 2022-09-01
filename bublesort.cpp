#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

void swap(int*xp,int*yp){
    int temp = *xp;
    *xp = *yp;
    *yp  = temp;
}


void bublesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
               swap(arr[j+1],arr[j]);
            }
        }
    }
}

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bublesort(arr,n);
    printarray(arr,n);

    return 0;
}