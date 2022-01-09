#include<iostream>
using namespace std;

void count(int a[],int n,int x,int i,int &ans){
    if(i==n){
        return;
    }

    if(a[i]==x){
        ans++;
    }
    count(a,n,x,i+1,ans);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x;
    cin>>x;

    int ans=0;
    count(a,n,x,0,ans);
    cout<<ans;

    return 0;
}