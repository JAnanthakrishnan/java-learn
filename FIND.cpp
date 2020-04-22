#include <iostream>
using namespace std;
int main()
{
    int t;
    int i,j;
    cin>>t;
    int n[t];
    int a[t];
    int digit;
    int c=0;


for(i=1012;i>0;i=i/10)
{
  digit=i%10;
  if(digit==0)
  continue;
  if(1012%digit==0)
  c++;
}
cout<<c;
}
