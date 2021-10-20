#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of cell\t";
    cin>>n;
    int a[n];

    for(int i=0 ; i<n; i++)
    {
       cout<<"enter number in array\t";
       cin>>a[i];
    }
    int ans=2;
    int pd= a[1]-a[0];
    int j= 2;
    int current= 2;

    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            current++;
        }
        else 
        {
            pd=a[j]-a[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}