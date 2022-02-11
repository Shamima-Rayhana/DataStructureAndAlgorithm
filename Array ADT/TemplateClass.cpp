#include<bits/stdc++.h>

using namespace std;

template<class T>
class Array
{
private:
    T *A;
    int Size;
    int length;
public:
    Array()
    {
        Size=20;
        A=new T[Size];
        length=0;
    }
    Array(int sz)
    {
        Size=sz;
        A=new T[Size];
        length=0;
    }
    ~Array()
    {
        delete []A;
    }
    void Display();
    void Insert(int index, T element);
    int Delete(int index);
};

template<class T>
void Array<T>:: Display()
{
    cout<<"Elements are : \n"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl<<endl<<endl;
}

template<class T>
void Array<T>:: Insert(int index, T element)
{
    if(index>=0 && index<=length)
    {
        for(int i=length;i>index;i--)
        {
            A[i+1]=A[i];
        }
        A[index]=element;
        length++;
    }
}

template<class T>
Array<T> :: Delete(int index)
{
    if(index>=0 && index<=length)
    {
        int element=A[index];
        for(int i=length-1; i>index;i--)
        {
            A[i-1]=A[i];
        }
        length--;
        return element;
    }
    return 0;
}

int main()
{
    Array<int> arr;
    arr.Insert(0,10);
    arr.Insert(1,20);
    arr.Insert(2,30);
    arr.Insert(3,40);
    arr.Display();
    arr.Delete(2);
    arr.Display();

    Array<float> arr2;
    arr2.Insert(0,10.5);
    arr2.Insert(1,20.3);
    arr2.Insert(2,30.5);
    arr2.Insert(3,40.7);
    arr2.Display();
    arr2.Delete(2);
    arr2.Display();

    return 0;
}
