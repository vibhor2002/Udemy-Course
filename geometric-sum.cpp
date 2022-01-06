#include<iostream>
#include<math.h>
using namespace std;

double Gsum(int k){
    // Base Case
    if(k==0){
        return 1;
    }

    // Recursive Case
    double SmallAns = Gsum(k-1);

    // Calculation
    return SmallAns + 1.0/pow(2,k);
}

int main()
{
    int k;
    cin>>k;

    cout<<Gsum(k);
    return 0;
}