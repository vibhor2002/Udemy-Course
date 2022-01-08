#include <iostream>
using namespace std;

bool func(int a[],int n,int key){
    if(n==0){
        return false;
    }

    if(a[0]==key){
        return true;
    }
    return func(a+1,n-1,key);

}

bool func2(int a[],int n,int key){
    if(n==0){
        return false;
    }

    if(a[n-1]==key){
        return true;
    }
    return func2(a,n-1,key);

}

bool func3(int a[],int n,int key,int i){
    if(i==n){
        return false;
    }

    if(a[i]==key){
        return true;
    }
    return func3(a,n,key,i);

}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin>>key;

    if (func(a,n,key)){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}