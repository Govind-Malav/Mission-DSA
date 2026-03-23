#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){

        char chr = 'A' +n-1;
        for(char ch=chr-i+1; ch<=chr; ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }

}