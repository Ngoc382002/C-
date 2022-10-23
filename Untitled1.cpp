#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout<<" Nhap so luong phan tu:";
		cin>>n;	
	} while(n<=0);
	int *a=new int [n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int tg;
	for(int i=0;i<n-1; i++)
		for(int j=i; j<n; j++) {
			if(a[i]>a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
		cout<<" mang sau khi sap xep tang dan:"<<endl;
		for(int i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		return 0;
	}

