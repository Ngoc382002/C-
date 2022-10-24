#include<iostream>
using namespace std;
int main(){
	int D,M;
	cout<<" Nhap Thang :"; 
	cin>>M;
	if(M<=1|| M<=12)
	{
		switch(M)
		{
			case 1: case 3: case 5: case 8: case 10: case 12:
				cout<<" Thang co 31 ngay";
				break;
			case 2 :
				cout<<"Thang co 28 ngay";
				break;
			case 4: case 6: case 9: case 11:
				cout<<" Thang co 30 ngay";
				break;
		}	
	}
	else 
			cout<<" Khong ton tai thang nay";
			return 0;
}
