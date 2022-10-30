#include<bits/stdc++.h>
using namespace std;
int n,dem=0;
bool timnt(int n)
{
	if(n<2) return false; 
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return false ;
		}
	return true;
}
int main()
{
	do
	{
		cout <<" Nhap n: ";
		cin >>n;
	}
	while(n<=0);
	for(int i=1;i<=n;i++)
	{
		if(timnt(i)==true) dem++;
	}
	cout <<dem;
	return 0;
}

