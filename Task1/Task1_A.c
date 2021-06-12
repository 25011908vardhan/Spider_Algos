#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int l;
    scanf("%d",&l);
    char s[l+1],prev[l+1],next[l+1];
    scanf("%s",s);
    strcpy(prev,s);
    strcpy(next,s);
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            prev[i]='1';
        }
        else
        {
            prev[i]='0';
            break;
        }
    }
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            next[i]='0';
        }
        else
        {
            next[i]='1';
            break;
        }
    }
    printf("%s %s",prev,next);
    
    return 0;
}
