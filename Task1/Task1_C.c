#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n,r,x,y,i,k=0,initial,t;
    scanf("%d %d %d %d",&n,&r,&x,&y);
    initial=r;
    int a[n],b[n],checker[n];
    for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
        if(a[i]==1) 
        {checker[k]=i;
        k++;}
       }
    for(i=0;i<n;i++)
        {scanf("%d",&b[i]);
        }
    for(i=0;i<k;i++)
    {
     t=checker[i];
        if(b[t]==1)
            r+=x;
        else
            r-=y;
    }
    if(r>initial)
        printf("promoted");
    else if(r==initial)
        printf("no change");
    else
        printf("demoted");
    return 0;
}
