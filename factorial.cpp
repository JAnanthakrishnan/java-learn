#include <iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 unsigned long long int fact=1;
 int i;
 for(i=n;i>0;i--)
 {
 fact*=i;
 }
 cout<<fact;
}
