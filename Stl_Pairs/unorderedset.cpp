#include<bits/stdc++.h>
using namespace std;
void explainunorderedset(){

    unordered_set<int> uos;
    uos.insert(2);
    uos.insert(4);
    uos.insert(1);
    uos.insert(34);
    uos.insert(2);
    uos.insert(4);
    uos.insert(4);
    uos.insert(4);

    for(auto it:uos){
        cout<<it<<" ";
    }




}

int main(){
    explainunorderedset();
    return 0;
}