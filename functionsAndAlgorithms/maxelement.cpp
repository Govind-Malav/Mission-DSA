#include<bits/stdc++.h>
using namespace std;
void explainMaxElement(){
int arr[5]={6,2,1,20,0};

   auto it =*max_element(arr,arr+5);
   cout<<it<<endl;
   auto it2= *min_element(arr,arr+5);
   cout<<it2<<endl;
}

int main(){
    explainMaxElement();
    return 0;
}