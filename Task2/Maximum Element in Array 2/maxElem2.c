#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n,i,q,l,r,val;
    scanf("%lld %lld",&n,&q);
    long long int a[n];

    for(i=0;i<n;i++)
        a[i]=i+1;
        
    while(q!=0)
    {
        scanf("%lld %lld %lld",&l,&r,&val);
        a[l-1]+=val;
        a[r]-=val;
        q--;
    }

    int sum=a[0];
    for(i=1;i<n;i++)
    {
        a[i]+=sum-i;
        sum=a[i];
    }

    long long int max=a[0];
    for(i=1;i<n;i++)
    if(max<a[i])
        max=a[i];
    printf("%lld",max);

    return 0;
}
