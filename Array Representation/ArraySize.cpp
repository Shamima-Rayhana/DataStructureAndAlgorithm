#include<bits/stdc++.h>

using namespace std;

int main()
{
    int *p, *q;

    p=(int *)malloc(5*sizeof(int));
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=40;
    p[4]=50;

    cout<<"The Dynamic array is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    cout<<endl;

    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    cout<<"After copy p in q the Dynamic array is : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"q["<<i<<"] = "<<p[i]<<endl;
    }
    cout<<endl;

    free(p);
    p=q;
    q=NULL;

    cout<<"After modify the size the Dynamic array p is : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    cout<<endl;
    //assign value for increment index

    p[5]=60;
    p[6]=70;
    p[7]=80;
    p[8]=90;
    p[9]=100;

    cout<<"The Modified Dynamic array p is now : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    cout<<endl;

    return 0;

}
