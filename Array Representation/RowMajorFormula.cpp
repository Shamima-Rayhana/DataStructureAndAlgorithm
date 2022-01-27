#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Finding Address using Row major formula"<<endl<<endl;

    int arr[3][5] = {{1, 2, 3, 4, 5}, {5, 10, 15, 20, 25}, {10, 30, 40, 50, 60}};
    int *base, *address, row=3, col=5, i=2, j=3;
    int w=1;//data type size

    base = (int*) arr;
    address=(base+((i*col)+j)*w);

    cout<<"Value of Array["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
    //cout<<" Address of Array["<<i<<"]["<<j<<"] = "<<address<<endl;
    printf("Address of Array[i][j] = %u\n",address);
    //cout<<endl<<address<<endl;


    return 0;
}
