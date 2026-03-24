#include<bits/stdc++.h>
using namespace std;
void explainset(){
 set<int> st;
 st.insert(2);
 st.insert(21);
 st.insert(12);
 st.insert(211);

  
//find the element 
 auto it = st.find(34);
 if(it!=st.end()){
    cout<<"Found "<<*it<<endl;
 }
 else{
    cout<<"Not Found "<<endl;
 }

 //print unique elements and ion ascending order 
 for(auto it:st){
    cout<<it<<" ";
}
cout<<endl;
//check if there is 4 or not
cout<<st.count(4);
cout<<endl;

//erase the element 
st.erase(4);
for(auto it:st){
    cout<<it<<" ";

}
cout<<endl;

//lower bound - > first element which is greater than or equal to number
auto it= st.lower_bound(12);
cout<<*it<<endl;


//upper bound - > first element which is greater than number
auto it2=st.upper_bound(12);
cout<<*it2<<endl;
};



int main(){
    explainset();
    return 0;
}