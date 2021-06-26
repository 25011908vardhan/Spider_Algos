#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int max,n,q,l,r,val,i;
    scanf("%d %d",&n,&q);
    int a[n];
    for(i=0;i<n;i++)
    a[i]=i+1;
    while(q!=0)
    {
        scanf("%d %d %d",&l,&r,&val);
        for(i=l-1;i<r;i++)
        a[i]+=val;
    q--; 
    }
    max=a[0];
    for(i=1;i<n;i++)
        if(max<a[i])
            max=a[i];
    printf("%d",max);
    return 0;
}
