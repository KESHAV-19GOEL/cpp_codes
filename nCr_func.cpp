#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else{return n*factorial(n-1);}
}
int fac(int a)
{
  int b =1;
  if(a ==0 )
  return 1;
  while(a!=0)
  {
   b = b*a;
 a--;
  }
  return b;

}
int ncr(int a,int b)
{
 int c = (fac(a))/(fac(b)*fac(a-b));
 return c;

}
int main()
{
       int n,r;
       cout<<"Enter n,r to calculate n and r"<<endl;
       cin>>n>>r;
       cout<<fac(n)<<"  "<<fac(r)<<endl;
       cout<<"nCr is "<<ncr(n,r)<<endl;
  return 0;
}