//sum
#include<iostream>
using namespace std;
int sumoftwo(int num1, int num2)
{
    int num3= num1+num2;
    return num3;
}
int main()
{
    int num1;
    cout<<"enter num1"<<endl;
    cin>>num1;
    int num2;
    cout<<"enter num2"<<endl;
    cin>>num2;
   cout<< sumoftwo(num1,num2)<<" ";
    return 0;
}