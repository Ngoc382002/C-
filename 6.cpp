#include<bits/stdc++.h>
using namespace std;
void nhap(int &x, int &y)
{
	do
	{
		cout<<"\n nhap so hang cua ma tran A va B: ";cin>>x;
		cout<<"\n nhap so cot cua ma tran A va B: ";cin>>y;
	}while(x<=0||y<=0);
}
void nhapmang(int **a,int x,int y)
{
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
			
}
void xuatmang(int **a,int x,int y)
{	
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
		
}
// em chi biet lam den day thui a


