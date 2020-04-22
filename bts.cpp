#include <iostream>
using namespace std;
int main()
{   int i,j,k;
int flag,g;
    int count=0;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    int small=b[0];
    for (i = 0; i < m; i++)
    {
      if (b[i] < small)
        small = a[i];
    }
    for(i=large;i<small;i++)
    {  flag=0;g=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            flag++;
        }
        for(k=0;k<m;k++)
        {
            if(b[k]%i==0)
            g++;
        }
        if(flag!=0&&g!=0)
        count++;
    }
    cout<<count;
}
