#include<bits/stdc++.h>

using namespace std;

//for global variable
//int x=0;

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;

}


