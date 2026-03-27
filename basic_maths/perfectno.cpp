#include<bits/stdc++.h>
using namespace std;
bool perfectno(int n){
    int original = n;
    if(n==1)return false;
    int sum =1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            sum=sum+i;
            if(i!=n/i)
            sum = sum + n/i;
        }

    }
    return (original == sum);
}



int main(){
    int n;
    cin>>n;
    cout<<perfectno(n)<<endl;
} 