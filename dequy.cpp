#include<bits/stdc++.h>
using namespace std;
void nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu:"<<i+1<<endl;
		cin>>a[i];
	}
}
void xuat(int *a, int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
int tong(int *a, int n)
{
	int kq=0;
	if(n==2)
		return a[1];
	if((n-1)%2==1)
	{
		kq= a[n-1]+tong(a,n-2);
	}
	else
	{
		n -=1;
		kq= a[n-1]+tong(a,n-2);
	}
return kq;
}
int main()
{
	int n;
	cout<<"nhap so phan tu trong mang: ";cin>>n;
	int *a=new int[n];
	nhap(a,n);
	cout<<"mang sau khi nhap"<<endl;
	xuat(a,n);
	cout<<"tong phan tu le trong mang: "<<tong(a,n);
	delete []a;
	return 0;
}
