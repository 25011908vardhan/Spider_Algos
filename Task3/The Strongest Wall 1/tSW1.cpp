#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(int a[],int m,int sum)
{
    bool t[m+1][sum+1];
    for(int i=0;i<=m;i++)
     t[i][0]=true;   
    for(int i=1;i<=sum;i++)
     t[0][i]=false;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            t[i][j]= t[i-1][j]||t[i-1][j-a[i-1]];
            else
            t[i][j]=t[i-1][j];
        }
    int index=0;
    for(int i=sum/2;i>=0;i--)
        if (t[m][i])
        {
            index=i;
            break;
        }
    return index;
}

int main() {
    int n,m,sum=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
     {  
        cin>>a[i];
        sum+=a[i];
     }
    n==1? cout<<sum: cout<<solve(a,m,sum);
    return 0;
}
