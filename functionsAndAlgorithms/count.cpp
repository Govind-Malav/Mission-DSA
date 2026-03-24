#include<bits/stdc++.h>
using namespace std;
void explaincount(){
int arr[5]={6,2,1,2,0};

   int num=2;
   cout<<count(arr,arr+5,num)<<endl; // 2 is the number whose count we want to find

}

int main(){
    explaincount();
    return 0;
}