#include<bits/stdc++.h>
using namespace std;
void explainpriorityqueue(){
    priority_queue<int> pq;
    pq.push(45);
    pq.push(2);
    pq.push(100);
    pq.push(47);
    pq.push(25);
    pq.push(62);

    priority_queue<int, vector<int>, greater<int>> pqq;
    pqq.push(45);
    pqq.push(2);
    pqq.push(100);
    pqq.push(47);
    pqq.push(25);
    pq.push(62);

    cout<<pq.top()<<" "<<endl;
    
    while(pq.empty()==false){
        cout<<pq.top()<<"  ";
        pq.pop();
        
    }
    cout<<endl;

    while(pqq.empty()==false){
        cout<<pqq.top()<<"  ";
        pqq.pop();
        
    }

}

int main(){
    explainpriorityqueue();
    return 0;
}