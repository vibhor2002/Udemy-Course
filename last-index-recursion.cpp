#include<iostream>
using namespace std;

int lastIndex(int a[],int n,int x,int i){
    if(i==n){
        return -1;
    }

    if(a[n-i]==x){
        return n-i;
    }
    return lastIndex(a,n,x,i+1);


}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
        cout<<" ";
    }

    int x;
    cin>>x;

    cout<<lastIndex(a,n,x,0);
    return 0;
}