#include<bits/stdc++.h>

using namespace std;

int fibonacci_using_loop(int n)
{
    int a=0,b=1,sum=0;
    if(n<=1)
    {
        return n;
    }
    for(int i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int F = fibonacci_using_loop(n);
    cout<<F<<endl;
}
