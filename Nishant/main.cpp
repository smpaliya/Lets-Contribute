#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int product = 1;
    
    for(int i=1; i<=10; i++){
        cin>>arr[i];
        product *= arr[i];
    }
    cout<<"Product: "<<product;
    return 0;
}