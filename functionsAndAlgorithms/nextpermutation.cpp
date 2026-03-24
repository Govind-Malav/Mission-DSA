#include<bits/stdc++.h>
using namespace std;
void explainnextpermutation(){
string str="abcd";

// do{
//     cout<<str<<endl;

// }while(next_permutation(str.begin(),str.end()));
 
int arr[4]={1,2,3,4};

do{
    cout<<arr<<endl;

}while(next_permutation(arr,arr+4));


}

int main(){
    explainnextpermutation();
    return 0;
}