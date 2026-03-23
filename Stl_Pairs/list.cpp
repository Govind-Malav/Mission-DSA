#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ls ={1,2,3,4};
    ls.push_front(10);
    for(auto it:ls){
        cout<<it<<" ";
    }

}

int main(){
    explainList();
    return 0;
}