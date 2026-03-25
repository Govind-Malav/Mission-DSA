#include<bits/stdc++.h>
using namespace std;
int no_of_odd_digit(int n){
    int count=0;
    while(n>0){
        int rem=n%10;
        if(rem%2==1){
            count =count +1;
           
        }
         n=n/10; 
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<no_of_odd_digit(n)<<endl;
}