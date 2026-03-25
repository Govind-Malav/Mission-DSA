#include<bits/stdc++.h>
using namespace std;

bool reverse(int n){
    int rev=0;
    int original =n;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return (original == rev);
}
int main(){

    int n;
    cin >>n;
    cout<<reverse(n)<<endl;

}