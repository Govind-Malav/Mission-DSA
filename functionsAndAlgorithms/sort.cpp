#include<bits/stdc++.h>
using namespace std;
void explainSort(){
    int arr[5]={6,2,1,2,0};
    sort(arr+1,arr+3);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    explainSort();
    return 0;
}