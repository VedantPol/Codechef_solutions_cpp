#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--){
int x,y,var=0;
 scanf("%d", &x);  
 while (x>0)
 {
    y=x%10;
    var=(var*10)+y;
    x=x/10;

 }
 printf("%d\n", var); 


}
return 0;
}