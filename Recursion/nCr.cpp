#include<bits/stdc++.h>

using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}
int nCr(int n,int r)
{
    int a,b,c;
    a=fact(n);
    b=fact(r);
    c=fact(n-r);
    return a/(b*c);
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<nCr(n,r)<<endl;

}
