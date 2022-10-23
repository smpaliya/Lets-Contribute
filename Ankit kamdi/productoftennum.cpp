#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
   cout<<"product of 10 number is:"<<sum;
   return 0;
}
