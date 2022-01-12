#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int convInt(char input[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = convInt(input, n - 1);
    int lastDigit = input[n - 1] - '0';
    int ans = smallAns*10+lastDigit;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    char input[n];
    cin >> input;

    int a =convInt(input,n);
    cout<<a;

    return 0;
}