#include<iostream>
using namespace std;

int val,value,sum=0;

int add_this(int val,int value)
{
    sum=val+value;
    cout<<"The sum is :"<<" "<<sum<<endl;
}

int main()
{
    int a,b=0;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the second number :"<<endl;
    cin>>b;
    add_this(a,b);
}
