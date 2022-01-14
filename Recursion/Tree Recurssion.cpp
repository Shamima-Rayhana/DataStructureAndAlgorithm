#include<bits/stdc++.h>

using namespace std;

int fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    int p;
    cin>>p;
    fun(p);
    return 0;
}
