#include<bits/stdc++.h>
using namespace std;
void explainSort(){
    int arr[5]={6,2,1,2,0};
    sort(arr,arr+5);
    // reverse(arr, arr+5);            //we applied reverse function after  sorting

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    explainSort();
    return 0;
}