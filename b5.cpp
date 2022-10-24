#include<iostream>
using namespace std;

void nhap_n(int &n){
	do{
		cout << "nhap so luong phan tu: "; cin >> n;
	}
	while(n<=0);
}

void nhap_mang(int n, int *a) {
	for (int i=0; i<n; i++) {
		cout << "nhap phan tu so" << i+1 << ":\t" ; cin >> a[i];
	}
}


void xuat_mang(int n, int *a) {
	for (int i=0;i<n;i++) {
		cout << a[i] << "\t";
	}
}


int main(){
	int n;
	int *a;
	a = new int[n];
	nhap_n(n);
	nhap_mang(n,a);
	xuat_mang(n,a);
	return 0;
}

