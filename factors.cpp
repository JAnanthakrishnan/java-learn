#include <iostream>
using namespace std;
int main()
{
  long long n;
  cout<<"Enter the number :";
  cin>>n;
  for(long long i=2;i<=n/i;i++)

  {
    while(n%i==0)
    {
      cout<<i<<" ";
      n=n/i;
    }
  }
  if(n>1) cout<<n;

}
