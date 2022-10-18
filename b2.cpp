#include <iostream>

using namespace std;
int main() {
	int n,a,b;
	cout<<" nhap n:";
	cin>>n;
	cout<<"nhap a:"; cin>>a;
	cout<<" nhap b:"; cin>>b;
	switch(n) {
		case 0:
			cout<<"Phep tinh cong:"<<a+b<<endl;
			break;
		case 1:
			cout<<"Phep tinh tru:"<<a-b<<endl;
			break;
		case 2:
			cout<<"phep tinh lay nguyen:"<<a/b<<endl;
			break;
		case 3:
				cout<<" switch case"<<endl;
				break;
		default:
			cout<<" none"<<endl;
	}
	return 0;
}
