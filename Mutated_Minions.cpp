#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, k, mu = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
           
        }
        for(int i=0;i<n;i++){
         arr[i]+=k;
            if (arr[i]%7==0)
            {
                mu+=1;
            }
        }
        cout<<mu<<"\n";
    }
    return 0;
}