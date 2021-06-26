#include <stdio.h>
#include<string.h>
int mem[100001];
int count(int a[],int n,int i)
{    
    if(a[i+1]==0 && i!=n)        
        return (mem[i]!=0)?mem[i]:(mem[i]=count(a,n,i+2));
    
    else if(a[i+2]==0&&i<n-1)
        return (mem[i]!=0)?mem[i]:(mem[i]=count(a,n,i+3));
    
    else if(a[i+1]!=0&&a[i+2]!=0&&(i<n-1))
        return (mem[i]!=0)?mem[i]:(mem[i]=(count(a,n,i+1)+count(a,n,i+2))%1000000007);
    
    else{
         if(i==n)
    {
        if(a[i]==1)
        return mem[i]=1;
        else
        return mem[i]=0;
    }
    
    if(i==n-1)
    { if(a[i]==1)
        return mem[i]=1;
        else
        return mem[i]=0;
        
    }
    }
    return 0;
    
}
int main()
{
    memset(mem,0,sizeof(mem));
    int counter=0,n,m,i,k;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<=n;i++)
    a[i]=1;
   
    for(i=0;i<m;i++)
   { scanf("%d",&k);
       a[k]=0;
       if(a[k-1]==0&&m!=1)
       counter=-1;
       
   }
   if(counter==-1||a[n]==0)
   {   
       printf("0");
       return 0;
   }
    printf("%d",count(a,n,0)%1000000007);
    return 0;
}
