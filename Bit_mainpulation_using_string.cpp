#include<iostream>
using namespace std;
void binary1(int n)
{
string bin = "";
int i=0;
while(n!=0)
{
  if (n%2 ==1)
  {
    bin[i] = '1';
  }
  else{ bin[i] = '0';}
i++;
n=n/2;
}
cout<<bin;
//return ;
}

int main()
{   int n;
 string m = "abcdefg";
 //cout<<n.capacity();
 cout<<m;
cout<<"Enter n\n";
cin>>n;
binary1(n);
  return 0;
}