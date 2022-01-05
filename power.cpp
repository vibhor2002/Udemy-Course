#include<iostream>
using namespace std;

int power(int x,int n){
    // Base case
    if(n==0){
        return 1;
    }

    // Recursive
    int SmallOut = power(x,n-1);

    //Calculation
    return x*SmallOut;
}

int main()
{
    cout<<power(5,3);
    return 0;
}