#include<iostream>
using namespace std;

bool isSorted(int a[],int n){
    // Base Case
    if(n==0||n==1){
        return true;
    }

    // Recursive Case
    if(a[0]>a[1]){
        return false;
    }
    bool isSmallerSorted = isSorted(a+1,n-1);

    // Calculation
    return isSmallerSorted;
    // if(isSmallerSorted){
    //     return true;
    // }
    // else{
    //     return false;
    // }

}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    if(isSorted(a,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
     
    return 0;
}