#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int count =0;
    int rem;
    int original = n;
    while(n>0){
        n=n/10;
        count = count +1;
    }
    n=original;
    int pal =0;
    while(n>0){
        rem =n %10;
        pal = pal +(int)pow(rem,count);
        n=n/10;
    }
   return (original==pal);
}
int main(){
    int n;
  cin>>n;
  cout<<armstrong(n)<<endl;

}