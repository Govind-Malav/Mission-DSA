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

//less time complexity 
void reverse(int arr[], int n){
    int left =0;
    int right = n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left ++;
        right --;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}