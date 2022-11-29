#include<iostream>
using namespace std;
int main()
{
       int a,b,c;
       char op;
       cout<<"Enter a and b\n";
       cin>>a>>b;
       getchar();
       cout<<"Enter your operator\n";
       cin>>op;
       if (op=='+')
       {
        c = a+b;
       }
        if (op=='-')
       {
        c = a-b;
       }
        if (op=='*')
       {
        c = a*b;
       }
        if (op=='/')
       {
        c = a/b;
       }
       cout<<a<<op<<b<<'='<<c;

  return 0;
}