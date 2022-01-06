#include<iostream>
using namespace std;

int countZero(int n){
    // Base Case
    if(n==0){
        return 0;
    }

    // Recursive Case
    int SmallAns = countZero(n/10);

    // Calculation
    int lastdigit = n%10;
    if(lastdigit==0){
        return SmallAns+1;
    }
    else{
        return SmallAns;
    }

}

int main()
{
    int n;
    cin>>n;

    cout<<countZero(n);
    return 0;
}