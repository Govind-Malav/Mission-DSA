#include <bits/stdc++.h>
using namespace std;
void explainvectors()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.emplace_back(6);
    cout << vec.size() << endl;

    // for printing the vector elements
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // using iterators
    auto beginItr = vec.begin();
    auto endItr = vec.end();
    for (auto i = beginItr; i < endItr; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // reverse iterator
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();
    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // front and back functions
    cout << vec.front() << " " << vec.back() << endl;
    // pop -> last element will be removed

    vec.erase(vec.begin() + 1); // removing the element at index 1
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // vec.pop_back();

    vec.erase(vec.begin() + 1, vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

  //swapping two vectors
    vector<int> vec1={1,2,3};
    vector<int> vec2={4,5,6};
    swap(vec1,vec2);
    //inserting an element at a specific position
    vec2.insert(vec2.begin()+1,20);

    for(auto it:vec1){
        cout<<it<<" ";
    }

    cout<<endl;
    
    for(auto it:vec2){
        cout<<it<<" ";
    }

    
}

int main()
{
    explainvectors();
    return 0;
}