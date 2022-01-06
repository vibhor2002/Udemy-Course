#include<iostream>
using namespace std;
int multi(int m,int n){
    // Base Case
    if(n==0){
        return 0;
    }

    // Rcursive Case
    int SmallAns = multi(m,n-1);

    // Calculation
    return SmallAns+m;
}

int main()
{
    int m,n;
    cin>>m>>n; 

    cout<<multi(m,n);
    return 0;
}