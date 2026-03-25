#include <bits/stdc++.h>
using namespace std;

bool internalComparator(int el1, int el2)
{
    if (el1 < el2)
        return false;
    return true; // this logic is for sorting in descending order if we want to start in ascending we change true false
}

bool internalComparator2(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.second > el2.second)
        return true;
    if (el1.second < el2.second)
        return false;
    if (el1.first < el2.first)
        return true;
    return false;
}

void explainComparator()
{
    int arr[5] = {6, 2, 1, 20, 0};
    sort(arr, arr + 5, internalComparator);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // with the help of pair

    pair<int, int> arr2[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    // sort it according to
    // the second element
    //{2,9} , {3,9}, {1,6}, {2,6}, {1,5}

    sort(arr2, arr2 + 5, internalComparator2);
    for (int i = 0; i < 5; i++)
    {
        cout << "{" << arr2[i].first << " " << arr2[i].second << "}" << endl; // now only with this concept this print in ascending order
    }
}
int main()
{
    explainComparator();
    return 0;
}