#include<bits/stdc++.h>
using namespace std;
void explainqueue(){
    //FIFO->First in first out
    queue<int >q;
    q.push(2);
    q.push(4);
    // cout<<q.size()<<endl;
    cout<<q.front()<<" "; // first element
    q.pop();
    cout<<q.front()<<" "; 

    cout<<endl;
    //what if we have to print all elements we cant do front pop front pop

    queue<int> qu;
    qu.push(22);
    qu.push(2);
    qu.push(100);
    qu.push(47);
    qu.push(25);
    qu.push(62);
    qu.push(29);

    while(qu.empty()==false){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}

int main(){
    explainqueue();
    return 0;
}