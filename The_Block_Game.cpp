#include <iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--){
int x,num;
cin>>num;
x=num;
int rev=0,digit;
do
{
    digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;


} while ( num!=0 );

if(x==rev){
    cout<<"wins\n";
}
else
{
    cout<<"loses\n";
}



}
return 0;
}