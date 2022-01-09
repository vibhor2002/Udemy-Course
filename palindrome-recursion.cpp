#include<iostream>
using namespace std;

bool palindrome(int a[],int s,int e){
    if(s>e){
        return true;
    }

    if(a[s]==a[e]){
        return palindrome(a,s+1,e-1);
    }
    else{
        return false;
    }

}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(palindrome(a,0,n-1)){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}