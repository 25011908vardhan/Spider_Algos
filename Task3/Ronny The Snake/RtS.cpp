#include<iostream>
#include<string>
using namespace std;

int main()
{
int ctr=0;
    string s;
    cin>>s;
    while(s.size()!=1)
    {
    int sum=0;
    
    for(int i=0;i<s.size();i++)
    sum+=s[i]-'0';
    
    s="";
    while(sum!=0)
    {
    s.push_back(sum%10+'0');
    sum/=10;
    } 
    ctr++;
    }
    cout<<ctr;
    return 0;
}