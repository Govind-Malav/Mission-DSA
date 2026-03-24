#include<bits/stdc++.h>
using namespace std;
void explainMap(){

    map<int ,string> mp;
    mp.insert({1,"abc"});
    mp[2] = "def";
    mp[3] = "ghi";
    mp[4] = "jkl";

    for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    auto it = mp.find(3);
    cout<<(*it).first<<"->"<<(*it).second<<endl;



}

int main(){
    explainMap();
    return 0;
}