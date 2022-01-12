#include<bits/stdc++.h>

using namespace std;

int Fibonacci_Array[100];

int fibonacci_using_Memoization(int n)
{
    if(n<=1)
    {
        Fibonacci_Array[n]=n;
        return n;
    }
    else
    {
        if(Fibonacci_Array[n-2]==-1)
        {
            Fibonacci_Array[n-2]=fibonacci_using_Memoization(n-2);
        }
        if(Fibonacci_Array[n-1]==-1)
        {
            Fibonacci_Array[n-1]=fibonacci_using_Memoization(n-1);
        }
        Fibonacci_Array[n]=Fibonacci_Array[n-2]+Fibonacci_Array[n-1];
        return Fibonacci_Array[n-2]+Fibonacci_Array[n-1];
    }
}

int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Fibonacci_Array[i]=-1;
    }
    int F = fibonacci_using_Memoization(n);
    cout<<F<<endl;
}


