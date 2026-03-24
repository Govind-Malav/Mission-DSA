#include<bits/stdc++.h>
using namespace std;
void explainMultimap(){
    multimap<int , string> mp;
    mp.insert({1,"abc"});
    mp.insert({1,"def"});
    mp.insert({1,"ghi"});
    mp.insert({2,"jkl"});
    mp.insert({3,"mno"});

    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


}

int main(){
    explainMultimap();
    return 0;
}