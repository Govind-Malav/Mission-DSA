#include<bits/stdc++.h>
using namespace std;

int occuring_element(int arr[], int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi=max(maxi, arr[i]);
    }
         int hash[maxi+1]={0};

        for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

      int maxcount=0;
      int element=-1;

    for(int i=0; i<=maxi; i++){
        if(hash[i]>maxcount){
            maxcount=hash[i];
            element=i;
        }
    }

    return element;

 
   

    
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<occuring_element(arr, n);


}