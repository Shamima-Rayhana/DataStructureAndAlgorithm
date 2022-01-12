#include<bits/stdc++.h>

using namespace std;

int fibonacci_using_Recursion(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci_using_Recursion(n-2) + fibonacci_using_Recursion(n-1);
}

int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int F = fibonacci_using_Recursion(n);
    cout<<F<<endl;
}

