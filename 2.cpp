//a school has following for grading system
//a. below 25 - F
//b. 25 to  44 - E
//c. 45 to 49 - D
//d. 50 to 59 - C
//e. 60 to 79 - B
//f. 80 to 100 - A
//Ask user to enter marks and print the corresponding grades.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    if(marks<25)
    {
        cout<<"grades is -->"<<" "<<"F"<<endl;
    }
    else if( marks<=44)
    {
        cout<<"gradesis -->"<<" "<<"E"<<endl;
    }
    else if( marks<=59)
    {
        cout<<"grades is-->"<<" "<<"D"<<endl;
    }
    else if( marks<=79)
    {
        cout<<"grades is-->"<<" "<<"B"<<endl;
    }
    else if(marks<=100)
    {
        cout<<"grades is-->" <<" "<<"A"<<endl;
    }
   
    return 0;
}