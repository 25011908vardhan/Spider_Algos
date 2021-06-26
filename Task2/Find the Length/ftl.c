#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,c,k,l,i;
    char s[1000000];
    scanf("%d",&t);
    while(t!=0)
    {
        c=0;
        k=0;
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(c<0)
                break;
            (s[i]=='<')?c++:c--;
            if(c==0)
                k=i+1;
        }
        printf("%d\n",k);
        
        
        t--;
    }
    return 0;
}
