#include <iostream>

using namespace std;

int main()
{
   float a;
   float T=0;
   cout<<" Thu nhap:";
   cin>>a;
   if(a>=10){
    T=a-(a*10/100);
    cout<<" Thu nhap sau thue la:"<<T<<endl;
    }
    else if(a>50){
        T=a-(a*20/100);
      cout<<" Thu nhap sau thue la:"<<T<<endl;
    }
   else if(a>=100)
    {
        T=a-(a*30/100);
         cout<<" Thu nhap sau thue la:"<<T<<endl;
    }
    return 0;
}
