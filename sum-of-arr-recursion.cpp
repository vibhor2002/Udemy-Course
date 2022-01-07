#include<iostream>
using namespace std;

int sumofArray(int a[],int n){
    // Base Case
    if(n==0){
        return 0;
    }

    return a[0]+sumofArray(a+1,n-1);
}

int sumofArray2(int a[],int n){
    // Base Case
    if(n==0){
        return 0;
    }

    return a[n-1]+sumofArray2(a,n-1);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<sumofArray(a,n);
    return 0;
}