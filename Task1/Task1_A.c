#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check(char a[],char b[],int n)
{
    int num1=0,num2=0,k,i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]=='0')
            k=0;
        else
            k=1;
        num1+=pow(2,n-1-i)*k;
         if(b[i]=='0')
            k=0;
        else
            k=1;
        num2+=pow(2,n-1-i)*k;
    }
    if(num2-num1==2)
        return 1;
    else
        return 0;
}

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
    if(check(prev,next,l))
    printf("%s %s",prev,next);
    else
        printf("-1");
    return 0;
}

