#include<iostream>
using namespace std;
bool prime(int l)
{
	if(l==2)
	 return true;
	for(int i=2;i*i<=l;i++)
	{
		if(l%i==0)
		{
		return false;
	    }
	}
	return true;
}
int diff(int l,int r)
{
	if(l==r)
	return 0;
	int a=0,b=0;
	for(int i=l;i<=r;i++)
	{
		if(prime(i))
		{
		  a=i;
		  break;
	    }
	}
	for(int j=r;j>=l;j--)
	{
		if(prime(j))
		{
		  b=j;
		  break;
	    }
	}
	if(a!=0&&b!=0)
	  return b-a;
	else if(a==0&&b==0)
	   return -1;
	 else
	 return 0;    
}
int main()
{
	int n;
	cin>>n;
	int l[n],r[n];
	for(int i=0;i<n;i++)
	  cin>>l[i]>>r[i];
	for(int j=0;j<n;j++)
	  cout<<diff(l[j],r[j])<<endl;  
}
