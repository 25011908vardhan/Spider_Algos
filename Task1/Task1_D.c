#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,n;
    scanf("%d",&t);
    while(t!=0)
    {
    scanf("%d",&n); 
    int i,j,k1=((n+1)/2)+1,k2=((n+1)/2)-1;
        
    for(i=1;i<=n;i++)
    {
      if(i<=(n+1)/2)
      {
       k1--;
       k2++;
      }
        else
        {
            k1++;
            k2--;
        }
     for(j=1;j<=n;j++)
     {
         if(j<=k1 || j>=k2)
         printf("*");
         else
         printf(" ");
     }
        printf("\n");
    }
        t--;
    }
    return 0;
}
