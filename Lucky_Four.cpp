#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--){
    int x,count=0,temp;
     scanf("%d", &x);  

    while (x>0)
    {temp=x%10;
        if(temp==4){
            count++;
        }
        x=x/10;
    }printf("%d\n", count); 
    


}
return 0;
}