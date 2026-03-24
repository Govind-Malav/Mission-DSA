#include<bits/stdc++.h>
using namespace std;
void explainmultiset(){
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(1);
    ms.insert(34);

    for(auto it : ms){
        cout<<it<<" ";
    };
    cout<<endl;

    //for erasing the elemenet

    auto it =ms.erase(2);
    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;

    //if we have to erase only one element among multiple element then we can do it like this
    auto it2= ms.erase(ms.find(4));
    for(auto it2 : ms ){
        cout<<it2<<" ";
    }

    cout<<endl;

    //count the number of occurence of the element
    cout<<ms.count(4)<<endl;
  
}

int main(){
    explainmultiset();
    return 0;
}