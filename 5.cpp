#include<iostream>
using namespace std;

void nhap_n(int &n){
	do{
		cout << "nhap so luong phan tu: "; cin >> n;
	}
	while(n<=3);
}

void nhap_mang(int n, int *a) {
	for (int i=0; i<n; i++) {
		cout << "nhap phan tu so " << i+1 << ":\t" ; cin >> a[i];
	}
}


void xuat_mang(int n, int *a) {
	for (int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
}
void xoa(int *a, int n){
	int k;
	do
	{
		cout<<"\n Vi tri can xoa: ";
		cin>>k;
	}while(k<0 || k>n);
	for(int i=0;i<n;i++)
	{
		if(i==k)
		{
			for(i=k;i<n;i++)
				a[i]=a[i+1];
			n--;
		}
	}
	cout<<"\n mang sau khi xoa "<<k<<": ";
	for(int i=0;i<n;i++)
		cout<<"\t"<<a[i];
}

int main(){
	int n;
	int *a;
	a = new int[n];
	nhap_n(n);
	nhap_mang(n,a);
	xuat_mang(n,a);
	xoa(a,n);
	delete [] a;
	return 0;
}

