#include<iostream>
#include<math.h>
using namespace std;

int binary1(int a)
{
int num=0,i=0;
// a=10;
while(a>0)
{  int bit=0;
  if (a&1==1)
  {   bit =1;
     num = pow(10,i)*bit +num; 
  }
i++;
a =  a>>1;
}
return num;
}

int binary2(int a)
{
int binary_num=0,i=0;
while (a>0)
{  int bit=0;
  if(a%2 == 1)
  {  bit =1;
    binary_num = pow(10,i)*bit +binary_num; 
  }i++; a /= 2;
}
return binary_num;

}

int main()
{ 
 int a,b;
 cout<<"Enter a \n";
cin>>a;

cout<<"Binary of a is "<<binary1(a)<<"  "<<binary2(a)<<endl;

cout<<"Enter b \n";
cin>>b;
cout<<"Binary of b is "<<binary1(b)<<"  "<<binary2(b)<<endl;

  
  return 0;
}