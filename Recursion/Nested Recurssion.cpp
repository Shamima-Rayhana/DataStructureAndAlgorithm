#include<bits/stdc++.h>

using namespace std;


int funA(int n)
{
    if(n>100)
        return n-10;
    return funA(funA(n+11));

}

int main()
{
    int p;
    cin>>p;
    int x=funA(p);
    cout<<x<<" ";
    return 0;
}


