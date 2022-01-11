#include<bits/stdc++.h>

using namespace std;

//Head Recursion

int fun(int n)
{
    if(n>0)
    {
        fun(n-1);//here function position in the head
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;

}
