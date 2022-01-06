#include<iostream>
using namespace std;

int sumofdigits(int n){
    // Base case
    if(n==0){
        return 0;
    }

    // Recursive Case
    int SmallAns = sumofdigits(n/10);

    // Calculation
    int lastdigit = n%10;
    return SmallAns+lastdigit;


}

int main()
{
    int n;
    cin>>n;

    cout<<sumofdigits(n);
    return 0;
}