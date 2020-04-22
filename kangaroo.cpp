#include <iostream>
using namespace std;
int main()
{
    long int x1,x2,v1,v2;

    long int i;
    int flag=0;
    cin>>x1>>v1>>x2>>v2;
    //if((x2>x1)&&(v2>>v1))
    //{cout<<"NO";flag=1;}
    //else
    //{
    for(i=0;i<1000000;i++)
    {
      if ((x1 + v1 * i) == (x2 + v2 * i)) {
        cout << "YES";
        flag = 1;
        break;
      }
    }
    if(flag==0)
    cout<<"NO";
}
