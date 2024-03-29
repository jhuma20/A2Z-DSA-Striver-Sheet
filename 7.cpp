#include<iostream>
using namespace std;
void printName(string name)
{
    cout<<name<<endl;
}

int main()
{
    string name;
    cout<<"enter the name"<<endl;
    cin>>name;
    printName(name);
    return 0;
}