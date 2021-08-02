#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long lli;
using namespace std;
bool check(lli mid, vector<lli>v,lli n, lli k)
{
    lli ctr=0,sum=0;
    for(lli i=0;i<n;i++)
    {
        if(v[i]>mid) return false;
        sum+=v[i];
        if(sum>mid)
        {
            ctr++;
            sum=v[i];
        }
    }
    return (++ctr<=k)? true: false; 
        
}
lli binarySearch(vector<lli> v, lli n, lli k)
{
    lli l= *max_element(v.begin(),v.end()),mid,r=0,maxSubArrSum=0;
    for(lli &i:v)
        r+=i;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid,v,n,k))
        {
          maxSubArrSum=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    
    return maxSubArrSum;
}

int main() {
    lli k,n;
    cin>>k>>n;
    vector<lli> v(n);
    for(lli i=0;i<n;i++)
        cin>>v[i];
    cout<<binarySearch(v,n,k);
    return 0;
}
