#include <iostream>
using namespace std;
int main()
{int a,k,m=0;
cin>>a;
cin>>k;
while(a--){
    int temp;
    cin>>temp;
    if(temp%k==0){
        m++;
    }



}
cout<<m;
return 0;
}