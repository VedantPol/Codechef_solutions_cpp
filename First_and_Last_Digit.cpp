#include <iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--){
 int x,first,last;
 cin>>x;  
 last=x%10;
// printf("%d\n",last);
 while (x>0)
 {
    first=x;
    x=x/10;
 }
printf("%d\n",last+first);
}


return 0;}