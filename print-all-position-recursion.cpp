#include<iostream>
using namespace std;

void allPos(int a[],int n,int x,int i){
    if(i==n){
       return;
    }

    if(a[i]==x){
        cout<<i<<" ";
    }
    allPos(a,n,x,i+1);

}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<endl;
    int x;
    cin>>x;


    allPos(a,n,x,0);

    return 0;
}