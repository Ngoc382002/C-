#include<iostream>
using namespace std;
void nhap( int *a, int &n){
	cout<<"\n Nhap vao so phan tu cua mang:";
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cout<<"\n Nhap a["<<i<<"]: ";
   		 cin>>a[i];
	}
}
void xuat(int a[], int &n)
{
  
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<"\t";
  }
}
int tonggiatri(int a[], int n)
{	
	if(n==2)
		return a[1];
	int kq=0;
	if(( n-1) %2=0)
		kq = a[n-1]+ tonggiatri(a,n-1);
	else 
		kq+=0;
	return kq;
}
int main(){
	int n;
	int *a;
	a=new int [n];
	nhap(a,n);
	xuat(a,n);
	cout<<tonggiatri(a,n);
	return 0;
}
