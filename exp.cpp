#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a[100];
  int b[100];
  int i,j,k,n,m;
  int pairs=0;
  int nonpairs=0;
  cout<<"Enter the number of elements :";
  cin>>n;
  m=n;
  cout<<"Enter the array :";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    b[i]=a[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i!=j)
      {
        if(a[i]==a[j])
        { --n;
          for(k=j;k<n;k++)
          {
            a[k]=a[k+1];
          }
        }
      }
    }
  }
  int count[100];
  for(i=0;i<n;i++)
  { count[i]=0;
    for(j=0;j<m;j++)
     {
       if(a[i]==b[j])
       count[i]++;
     }
  }
  for(i=0;i<n;i++)
  {
    if(count[i]%2==1)
    nonpairs++;
    /*if(count[i]>2)
    {
      pairs=pairs+count[i]/2;
    }
    else if(count[i]%2==0)
    pairs++;*/

  }
  pairs=(m-nonpairs)/2;
  cout<<"The number of pairs is :"<<pairs;
  cout<<"\nThe number of nonpairs is :"<<nonpairs;
}
