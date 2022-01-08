#include <iostream>
using namespace std;

int firstIndex(int a[],int n,int x, int i){
    if(i==n){
        return -1;
    }

    if(a[i]==x){
        return i;
    }
    return firstIndex(a,n,x,i+1);

}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    int x;
    cin>>x;

    cout<<firstIndex(a,n,x,0);



    return 0;
}