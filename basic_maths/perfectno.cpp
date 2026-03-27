#include<bits/stdc++.h>
using namespace std;
bool perfectno(int n){
    int original =n;
    int sum=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum = sum +i;
            }
        }
    return (original == sum);
}
int main(){
    int n;
    cin>>n;
    cout<<perfectno(n)<<endl;
}