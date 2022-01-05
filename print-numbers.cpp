#include<iostream>
using namespace std;

void print(int n){
    // Base Case
    if(n==0){
        return;
    }

    // Recursive Case
    print(n-1);

    cout<<n<<endl;
    return; //optional
}

void print2(int n){
    // Base Case
    if(n==0){
        return;
    }

    // Recursive Case
    cout<<n<<endl;

    print2(n-1); //optional
}

int main()
{
    int n;
    cin>>n;

    print(n);
    print2(n);
    return 0;
}