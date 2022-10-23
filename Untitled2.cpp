#include <iostream>
using namespace std;
int giaithua(int n)
{
	int giaithua = 1;
	for(int i=1;i<=n; i++)
	{
		giaithua=giaithua*i;
	
	}
	return giaithua;
}
int main(){
	int n;
	cin>>n;
	cout<<" giai thua cua " << n<<" la:"<<giaithua(n);
	return 0;
}
