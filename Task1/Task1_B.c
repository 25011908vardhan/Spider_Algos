#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,k=1,counter=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    if(n==1)
    {
    printf("0");
        return 0;
    }
    while(k!=0)
    {
        // k=1;
     for(i=0;i<n/2;i++)
     {
         if(s[i]!=s[i+(n/2)])
         {
             k=0;
             break;
         }
           
     }
        if(n==1)
        {
            break;
        }
        if(k==1)
         { n=n/2;
         counter++;}
    }
    printf("%d",counter);
    return 0;
}
