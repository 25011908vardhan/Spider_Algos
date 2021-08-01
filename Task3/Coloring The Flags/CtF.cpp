#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      
     int n,i,j,t=0,flag;
    cin>>n;
    for(i=2;i<=n;i++)
    {
    flag=0;
    for(j=2;j<=sqrt(i);j++)
    {
    if(i%j==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==0)
    t++;
    }
    cout<<(t*(t+1))/2;
    return 0;
}