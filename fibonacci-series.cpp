#include<iostream>
using namespace std;

int fibonacci(int n){
    // Base Case
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    //Recursive Case 
    int so1 =fibonacci(n-1);
    int so2 =fibonacci(n-2);

    //Calculation
    return so1+so2;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}