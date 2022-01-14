#include<iostream>
using namespace std;

int towerOfHanoi(int n){
    if (n==0){
        return 0;
    }

    return towerOfHanoi(n-1) + 1 + towerOfHanoi(n-1);
    //      a->b            a->c        b->c
}

int main()
{
    int n;
    cin>>n;

    cout<<towerOfHanoi(n)<<endl;
    
    return 0;
}