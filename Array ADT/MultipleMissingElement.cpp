#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {5,6,8,9,10,11,12,15,16,20};
    int low=arr[0];
    int diff=low-0;
    cout<<"The missing element are "<<endl;
    for(int i=0;i<10;i++)
    {
        if((arr[i]-i) != diff)
        {
            while(diff<arr[i]-i)
            {
                //cout<<"rumi"<<endl;
                cout<<diff+i<<endl;
                diff++;

            }

        }
    }
    return 0;
}

