#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{int a,min,temp;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
     scanf("%d", &arr[i]);


}

 sort(arr, arr + a);

for(int i=0;i<a;i++){
    cout << arr[i] << "\n";

}
return 0;
}