#include<iostream>
using namespace std;
int main(){
	int i=2, so, k=1;
	cout<<" Nhap so nguyen:";
	cin>>so;
	if(so!=0&& so!=1)
	{
		while(i<=so/2)
		{
			if(so%i==0)
			{
				k=0;
				break;
			}
		}
		i++;
	}
	else{
		k=0;
	}
	if(k==1){
		cout<<so<<" la so nguyen to"<<endl;
	}
	else {
		cout<<so<<" khong phai la so nguyen to"<<endl;
	}
	return 0;
}
