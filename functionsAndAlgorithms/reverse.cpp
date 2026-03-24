#include<bits/stdc++.h>
using namespace std;
void explainreverse(){
int arr[5]={6,2,1,20,0};
  reverse(arr,arr+5);
  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
    explainreverse();
    return 0;
}