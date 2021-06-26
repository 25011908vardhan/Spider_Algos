#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {   
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n],b[n-1];
    for(i=0;i<n-1;i++)
   scanf("%d",&b[i]);
     a[0]=b[0];
    sum+=a[0];
     for(i=1;i<=n-2;i++)
     {
         if(b[i]>b[i-1])
          {   a[i]=b[i-1];
              sum+=a[i];  
          }
         else
            { a[i]=b[i];
              sum+=a[i];
            }
     }
     a[n-1]=b[n-2];
    sum+=a[n-1];

    printf("%d",sum);
    return 0;
}

