//write a program that takes an input of age and prints if you are adult or not
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you are  not adult"<<endl;
    }
    else if(age>18)
    {
        cout<<"you are adult"<<endl;
    }
    return 0;

}