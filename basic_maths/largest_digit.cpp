#include <bits/stdc++.h>
using namespace std;
int largest_digit(int n)
{
    int largest = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        if (lastdigit > largest)
        {
            largest = lastdigit;
        }

         n=n/10;
    }
    return largest;
}

int main()
{
    int n;
    cin>>n;
    cout<<largest_digit(n)<<endl;
}