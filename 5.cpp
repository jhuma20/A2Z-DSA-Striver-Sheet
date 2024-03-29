#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array element"<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"print the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}