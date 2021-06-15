#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{int a;
cin>>a;
while(a--){
    int arr[3];
    for(int i=0;i<3;i++){
     scanf("%d", &arr[i]);  
    }
    sort(arr,arr+3);
    printf("%d\n", arr[1]); 



}
return 0;
}