#include<bits/stdc++.h>
using namespace std;
int fact =1;
int factorial(int n){
    for(int i=1; i<=n; i++){
        fact = fact*i; 
    }
    return fact;
}
int main(){
  int n;
  cin>>n;
  cout<<factorial(n)<<endl;
}