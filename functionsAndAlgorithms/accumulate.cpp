#include<bits/stdc++.h>
using namespace std;
void explainAccumulate(){
int arr[5]={6,2,1,2,0};
cout<<accumulate(arr,arr+5,0)<<endl; // 0 is the initial value of the sum
cout<<accumulate(arr,arr+5,1)<<endl; // 1 is the initial value of the sum
cout<<accumulate(arr+4,arr+5,10)<<endl; // 10 is the initial value of the sum

}

int main(){
    explainAccumulate();
    return 0;
}