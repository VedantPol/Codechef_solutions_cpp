#include <iostream>
using namespace std;
int main()
{int a;
long x,y,k,n;

cin>>a;
while(a--){
    int b=0;
cin>>x>>y>>k>>n;
int def=x-y;
while (n--)
{int p,c;
cin>>p>>c;
if (def<=p &&k>=c){
    b=1;
}}
if (b==1)
{
    cout<<"LuckyChef\n";
}
else
{
    cout<<"UnluckyChef\n";
}


    /* code */





}
return 0;
}