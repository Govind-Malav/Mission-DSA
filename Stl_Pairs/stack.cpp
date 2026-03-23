#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    //LIFO->Last in first out
    stack<int >st;
    st.push(2);
    st.push(4);
    // cout<<st.size()<<endl;
    cout<<st.top()<<" "; // last element
    st.pop();
    cout<<st.top()<<" "; 

    cout<<endl;

    //what if we have to print all elements we cant do top pop top pop

    stack<int> sta;
    sta.push(22);
    sta.push(2);
    sta.push(100);
    sta.push(47);
    sta.push(25);
    sta.push(62);
    sta.push(29);

    while(sta.empty()==false){
        cout<<sta.top()<<" ";
        sta.pop();
    }
}

int main(){
    explainstack();
    return 0;
}