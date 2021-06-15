#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{int a;
 int sum1,sum2;
 int lead1,lead2;
 sum1=sum2=lead1=lead2=0;
cin>>a;
while(a--){
    int x,y,m,n;
 scanf("%d %d", &x, &y);
sum1+=x;
sum2+=y;
if(sum1>sum2){
    m=sum1-sum2;
    if (m>lead1){
        lead1=m;
    }
}
else if(sum2>sum1){
    n=sum2-sum1;
    if (n>lead2){
        lead2=n;
    }
}

}
if (lead1>lead2){
    printf("%d %d",1,lead1); 
}
else if (lead2>lead1){
    printf("%d %d",2,lead2); 
}
return 0;
}