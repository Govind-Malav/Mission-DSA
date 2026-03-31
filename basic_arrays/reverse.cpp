#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int n){

    int temp[n];
    for(int i=0; i<n; i++){
        temp[n-i-1] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversearray(arr,n);
}