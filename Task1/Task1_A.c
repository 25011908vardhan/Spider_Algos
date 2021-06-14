#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

   int l;
    scanf("%d",&l);
    char s[l+1],prev[l+1],next[l+1];
    scanf("%s",s);
     if(l==1 && s[0]=='0')
    {
        printf("-1");
        return 0;
    }
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
    if(prev[0]!='0'&&next[0]!='0')
    printf("%s %s",prev,next);
    else
        printf("-1");
    return 0;
}

