#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" nam:";
	cin>>n;
	if(n%4==0&& n%100!=0) {
		cout<<" Nam:" <<n<<" la nam nhuan"<<endl;
	}
	else {
		cout<<" Nam:" <<n<<"  khong phai ]la nam nhuan"<<endl;
	}
	
}
