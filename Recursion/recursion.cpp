#include<bits/stdc++.h>

using namespace std;

//Tail Recursion

int fun(int n)
{
    if(n>0)
    {

        cout<<n<<" ";
        fun(n-1);//here the function position is tail
    }
}

int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;

}

