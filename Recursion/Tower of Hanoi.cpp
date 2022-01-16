#include<bits/stdc++.h>

using namespace std;

TOH(int n, int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"Move "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cout<<"Enter the num: "<<endl;
    cin>>n;
    TOH(n,1,2,3);
    return 0;

}
