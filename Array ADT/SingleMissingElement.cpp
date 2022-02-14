#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {5,6,8,9,10};
    int low=arr[0];
    int diff=low-0;
    for(int i=0;i<5;i++)
    {
        if((arr[i]-i) != diff)
        {
            cout<<"The missing element is "<<endl;
            cout<<diff+i<<endl;
            break;

        }
    }
    return 0;
}
